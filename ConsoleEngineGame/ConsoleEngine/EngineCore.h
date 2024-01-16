#pragma once
#include <map>
#include <list>

#include "ConsoleScreen.h"
#include "ConsoleObject.h"
class EngineCore
{
	friend class ConsoleObject;
public:
	//��ũ���� �ۺ����� Ǯ���� ������ ��ũ���� ���Ѿ��� ���� ��ũ���� ��Ű����
	ConsoleScreen Screen = ConsoleScreen();

	void init(int2 _ScreenSize);
	void Start();

	template<typename ObjectType, typename EnumType>
	ObjectType* CreateObject(EnumType _Order)
	{
		//�Ʒ��Լ�ȣ��
	}

	template<typename ObjectType, typename UpdateEnumType, typename RenderEnumType>
	ObjectType* CreateObject(UpdateEnumType _UpdateOrder, RenderEnumType _RenderOrder)
	{
		//�Ʒ��Լ�ȣ��
	}

	template<typename ObjectType>
	ObjectType* CreateObject(int _UpdateOrder = 0, int _RenderOrder = 0)
	{
		//ObjectType �������� NewObject�� �����
		//�ڽ�(EngineCore)�� �������μ� ������ �Ѵ�.
		
		//������Ʈ�׷�� �����׷쿡 NewObject�� �߰��Ѵ�
		
		//NewObject�� �����Ѵ�
		
	}

	template<typename ObjectType>
	ObjectType* CreateManager(int _UpdateOrder)
	{
		//�ش� �Ŵ����� ������ �̹� ������ ��������, �������͸���
		

		//ObjectType �������� NewObject�� �����
		//�ڽ�(EngineCore)�� �������μ� ������ �Ѵ�.
		//�øŴ����׷쿡 NewObject�� �߰��Ѵ�
		//NewObject�� �����Ѵ�
		
	}
	void EngineEnd()
	{
		EngineUpdate = false;
	}

	template<typename EnumType>
	std::list<ConsoleObject*> GetUpdateGroup(EnumType _Other)
	{
		//�Ʒ��Լ�����
	}

	std::list<ConsoleObject*> GetUpdateGroup(int _Order = 0)
	{
		//�ÿ�����Ʈ�׷��� _Order��° ����Ʈ�� ��ȯ�Ѵ�(����)
	}
private:
	// ���������ϴ� ��ɵ��� ���⿡ ��� ������� ��.
	std::map<int, ConsoleUpdater*> AllManager;

	// ���� �����̴� �ֵ�
	std::map<int, std::list<ConsoleObject*>> AllUpdateObject;
	std::map<int, std::list<ConsoleObject*>> AllRenderObject;
	bool EngineUpdate = true;
};

