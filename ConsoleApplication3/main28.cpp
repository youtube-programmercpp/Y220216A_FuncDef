#include <Windows.h>
#include <timeapi.h>
#pragma comment(lib, "Winmm")
#include <sstream>
class Sample {
	int base;

public:
	Sample(int base)
		: base { base }
	{
	}
	void 引数を持った関数(int& a)
	{
		char buf[256];
		wsprintfA(buf, "%d\n", base + ++a);
		OutputDebugStringA(buf);
	}
};
#include <functional> //関数オブジェクトを作るときに使う
int main()
{
	int a = 0;
	Sample x{ 500 };

	std::function<void()> 関数オブジェクト
	{
		[&a, &x]//キャプチャ
		{
			x.引数を持った関数(a);
		}
	};
	const auto uTimerID = 
		/*WINMMAPI MMRESULT WINAPI*/timeSetEvent
	(500 //ミリ秒間隔で定期実行
	, 0
	, [](UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2) noexcept->void
	{
		//ここから関数を呼ぶ
		(*reinterpret_cast<decltype(関数オブジェクト)*>(dwUser))();
	}
	, DWORD_PTR(&関数オブジェクト)
	, TIME_PERIODIC
	);
	Sleep(5000);
	timeKillEvent(uTimerID);
}
