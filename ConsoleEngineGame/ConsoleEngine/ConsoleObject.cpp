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
	//UpdateOrder�׷쿡 �ִ� ����Ʈ�� �̾Ƽ� ���۷����� ����
	
	//��ŸƮ�� ���� ���ͷ����� �����ϰ� ��ȸ
	
		//������Ʈ�� ����
		
		//������Ʈ�� nullptr�� ��� ����
		

		//������Ʈ�� �ڱ� �ڽ��� ��� continue
		

		//�̰� �浹
		//��ġ�� ������� ������Ʈ�� ����
		
	//�ƴϸ� �������͸���

}
