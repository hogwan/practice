#pragma once
#include <map>
#include <list>

#include "ConsoleScreen.h"
#include "ConsoleObject.h"
class EngineCore
{
	friend class ConsoleObject;
public:
	//스크린은 퍼블릭으로 풀지만 어차피 스크린이 지켜야할 것은 스크린이 지키겠지
	ConsoleScreen Screen = ConsoleScreen();

	void init(int2 _ScreenSize);
	void Start();

	template<typename ObjectType, typename EnumType>
	ObjectType* CreateObject(EnumType _Order)
	{
		//아래함수호출
	}

	template<typename ObjectType, typename UpdateEnumType, typename RenderEnumType>
	ObjectType* CreateObject(UpdateEnumType _UpdateOrder, RenderEnumType _RenderOrder)
	{
		//아래함수호출
	}

	template<typename ObjectType>
	ObjectType* CreateObject(int _UpdateOrder = 0, int _RenderOrder = 0)
	{
		//ObjectType 포인터인 NewObject를 만들고
		//자신(EngineCore)를 엔진으로서 가지게 한다.
		
		//업데이트그룹과 렌더그룹에 NewObject를 추가한다
		
		//NewObject를 리턴한다
		
	}

	template<typename ObjectType>
	ObjectType* CreateManager(int _UpdateOrder)
	{
		//해당 매니저의 종류가 이미 있으면 에러내고, 널포인터리턴
		

		//ObjectType 포인터인 NewObject를 만들고
		//자신(EngineCore)를 엔진으로서 가지게 한다.
		//올매니저그룹에 NewObject를 추가한다
		//NewObject를 리턴한다
		
	}
	void EngineEnd()
	{
		EngineUpdate = false;
	}

	template<typename EnumType>
	std::list<ConsoleObject*> GetUpdateGroup(EnumType _Other)
	{
		//아래함수리턴
	}

	std::list<ConsoleObject*> GetUpdateGroup(int _Order = 0)
	{
		//올오브젝트그룹의 _Order번째 리스트를 반환한다(값형)
	}
private:
	// 관리감독하는 기능들을 여기에 모아 놓으라는 것.
	std::map<int, ConsoleUpdater*> AllManager;

	// 실제 움직이는 애들
	std::map<int, std::list<ConsoleObject*>> AllUpdateObject;
	std::map<int, std::list<ConsoleObject*>> AllRenderObject;
	bool EngineUpdate = true;
};

