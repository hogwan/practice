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
	//에러체크(스크린이 매개변수 값이 0보다 작거나 같으면 에러)
	

	//멤버변수값을 매개변수값으로 받고
	

	//스크린y만큼의 벡터를 리사이즈
	
	//에러체크(스크린데이터사이즈가 0인지아닌지)
	

	//리사이즈된 각각의 y마다 x를 리사이즈 
	
		//에러체크(스크린x사이즈가 0인지아닌지)
	
}

void ConsoleScreen::ReleaseScreen()
{
	ScreenData.clear();
}

void ConsoleScreen::PrintScreen()
{
	//cmd화면을 다 지우고


	//스크린데이터의 y를 돌면서 y의 첫번째 글자의 주소를 받고 프린트

		//에러체크(스크린데이터[y]에 리사이즈가 안되있으면 에러)


		//첫번째 글자의 주소를 받고 프린트

	
	//화면을 초기화한다.

}

void ConsoleScreen::ClearScreen()
{
	//스크린데이터를 모두 *로 밀고 x의 마지막에 '\n'을 붙인다.
	for (int y = 0; y < ScreenY; y++)
	{
		for (int x = 0; x < ScreenX; x++)
		{
			ScreenData[y][x] = '*';
		}
		ScreenData[y][ScreenX] = '\n';
	}
}

//여기는 ConsoleObject완성 후
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
