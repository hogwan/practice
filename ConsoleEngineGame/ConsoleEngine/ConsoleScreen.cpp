#include "ConsoleScreen.h"
#include "EngineDebug.h"
#include "ConsoleObject.h"

ConsoleScreen::ConsoleScreen()
{
}

ConsoleScreen::~ConsoleScreen()
{
	ReleaseScreen();
}

void ConsoleScreen::CreateScreen(int _ScreenX, int _ScreenY)
{
	ReleaseScreen();
	//����üũ(��ũ���� �Ű����� ���� 0���� �۰ų� ������ ����)
	

	//����������� �Ű����������� �ް�
	

	//��ũ��y��ŭ�� ���͸� ��������
	
	//����üũ(��ũ�������ͻ���� 0�����ƴ���)
	

	//��������� ������ y���� x�� �������� 
	
		//����üũ(��ũ��x����� 0�����ƴ���)
	
}

void ConsoleScreen::ReleaseScreen()
{
	ScreenData.clear();
}

void ConsoleScreen::PrintScreen()
{
	//cmdȭ���� �� �����


	//��ũ���������� y�� ���鼭 y�� ù��° ������ �ּҸ� �ް� ����Ʈ

		//����üũ(��ũ��������[y]�� ������� �ȵ������� ����)


		//ù��° ������ �ּҸ� �ް� ����Ʈ

	
	//ȭ���� �ʱ�ȭ�Ѵ�.

}

void ConsoleScreen::ClearScreen()
{
	//��ũ�������͸� ��� *�� �а� x�� �������� '\n'�� ���δ�.
	for (int y = 0; y < ScreenY; y++)
	{
		for (int x = 0; x < ScreenX; x++)
		{
			ScreenData[y][x] = '*';
		}
		ScreenData[y][ScreenX] = '\n';
	}
}

//����� ConsoleObject�ϼ� ��
void ConsoleScreen::SetChar(const ConsoleObject& _Object)
{
	SetChar(_Object.GetPos(), _Object.GetRenderChar());
}

void ConsoleScreen::SetChar(const ConsoleObject* _Object)
{
	SetChar(_Object->GetPos(), _Object->GetRenderChar());
}

void ConsoleScreen::SetChar(const int2& _Pos, char _Char)
{
	if (0 > _Pos.Y)
	{
		return;
	}

	if (0 > _Pos.X)
	{
		return;
	}

	if (ScreenX <= _Pos.X)
	{
		return;
	}

	if (ScreenY <= _Pos.Y)
	{
		return;
	}

	ScreenData[_Pos.Y][_Pos.X] = _Char;
}
