#include "ConsoleObject.h"
#include "EngineCore.h"

ConsoleObject::ConsoleObject()
{
}

ConsoleObject::ConsoleObject(const int2& _StartPos, char _RenderChar)
	:Pos(_StartPos), RenderChar(_RenderChar)
{
}

ConsoleObject::~ConsoleObject()
{
}

int2 ConsoleObject::GetPos() const
{
	return Pos;
}

char ConsoleObject::GetRenderChar() const
{
	return RenderChar;
}

ConsoleObject* ConsoleObject::Collision(int _UpdateOrder)
{
	//UpdateOrder그룹에 있는 리스트를 뽑아서 레퍼런스로 받음
	
	//스타트와 엔드 이터레이터 선언하고 순회
	
		//오브젝트를 받음
		
		//오브젝트가 nullptr인 경우 에러
		

		//오브젝트가 자기 자신인 경우 continue
		

		//이게 충돌
		//위치가 같을경우 오브젝트를 리턴
		
	//아니면 널포인터리턴

}
