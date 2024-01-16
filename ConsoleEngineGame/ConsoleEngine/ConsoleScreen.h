#pragma once
#include <vector>
#include "ConsoleMath.h"
#include "EngineDebug.h"
class ConsoleScreen
{
public:
	ConsoleScreen();
	virtual ~ConsoleScreen();

	void CreateScreen(int _ScreenX, int _ScreenY);
	void ReleaseScreen();
	void PrintScreen();
	void ClearScreen();

	void SetChar(const class ConsoleObject& _Object);
	void SetChar(const class ConsoleObject* _Object);
	void SetChar(const int2& _Pos, char _Char);

	inline int GetScreenX()
	{
		return ScreenX;
	}
	inline int GetScreenY()
	{
		return ScreenY;
	}
protected:
private:
	int ScreenX = -1;
	int ScreenY = -1;

	std::vector<std::vector<char>> ScreenData;
};

