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
	void �������������֐�(int& a)
	{
		char buf[256];
		wsprintfA(buf, "%d\n", base + ++a);
		OutputDebugStringA(buf);
	}
};
#include <functional> //�֐��I�u�W�F�N�g�����Ƃ��Ɏg��
int main()
{
	int a = 0;
	Sample x{ 500 };

	std::function<void()> �֐��I�u�W�F�N�g
	{
		[&a, &x]//�L���v�`��
		{
			x.�������������֐�(a);
		}
	};
	const auto uTimerID = 
		/*WINMMAPI MMRESULT WINAPI*/timeSetEvent
	(500 //�~���b�Ԋu�Œ�����s
	, 0
	, [](UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2) noexcept->void
	{
		//��������֐����Ă�
		(*reinterpret_cast<decltype(�֐��I�u�W�F�N�g)*>(dwUser))();
	}
	, DWORD_PTR(&�֐��I�u�W�F�N�g)
	, TIME_PERIODIC
	);
	Sleep(5000);
	timeKillEvent(uTimerID);
}
