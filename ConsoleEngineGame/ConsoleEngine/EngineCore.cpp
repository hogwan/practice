#include "EngineCore.h"
#include <time.h>
void EngineCore::init(int2 _ScreenSize)
{
	//��üũ
	LeakCheck;
	//��ũ���� �����, �����õ� ����
	Screen.CreateScreen(_ScreenSize.X, _ScreenSize.Y);
	srand(time(0));
}

void EngineCore::Start()
{
	//����������Ʈ�� ���������� ����
	while (EngineUpdate)
	{
		//�����ӻ���(���μ����� ������)
		Sleep(100);

		//��� �Ŵ��� ������Ʈ
		{
			//AllManager�� iterator�� �ް� ��ȸ
			
				//iterator�� second�� Object�� �ް�
				
				//����üũ(Object�� nullptr�����ƴ���)
				

				//������Ʈ�� ������Ʈ
		
		}

		//��� �ֿܼ�����Ʈ ������Ʈ
		{
			
			//AllUpdateObject�� iterator�� �ް� ��ȸ
			
				//iterator�� second�� ObjectList�� �ް�
				
				//ObjectList�� ���ͷ����͸� �޾Ƽ� �ٽ� ��ȸ
				
					//�ֿܼ�����Ʈ������ �� Object�� �ް�
					
					//����üũ(Object�� nullptr�����ƴ���)
					
					//������Ʈ ������Ʈ
				


		}

		//��� �ֿܼ�����Ʈ ����
		{
			//AllRenderObject�� iterator�� �ް� ��ȸ

				//iterator�� second�� ObjectList�� �ް�

				//ObjectList�� ���ͷ����͸� �޾Ƽ� �ٽ� ��ȸ

					//�ֿܼ�����Ʈ������ �� Object�� �ް�

					//����üũ(Object�� nullptr�����ƴ���)

					//������Ʈ ������Ʈ

		}

		//������ �Ϸ�� ��ũ���� ���
		
		//���� ������ ����
		{
			//AllRenderObject�� iterator�� �ް� ��ȸ
			
				//iterator�� second�� ObjectList�� �ް�
				

				//ObjectList�� ���ͷ����͸� �޾Ƽ� �ٽ� ��ȸ
				
					//�ֿܼ�����Ʈ������ �� Object�� �ް�
					

					//Object�� IsPendingKill�� �ƴϸ� continue
					

					//����üũ(������Ʈ�� �������������ƴ���)
					

					//ObjectList���� ���� ��带 ���ͷ����ͷ� erase���ش�.
					
				
			
		}

		//// ������Ʈ ������ ����
		{
			//AllUpdateObject�� iterator�� �ް� ��ȸ
			
				//iterator�� second�� ObjectList�� �ް�
				
				//ObjectList�� ���ͷ����͸� �޾Ƽ� �ٽ� ��ȸ
				
					//�ֿܼ�����Ʈ������ �� Object�� �ް�
					
					//Object�� IsPendingKill�� �ƴϸ� continue
					

					//����üũ(������Ʈ�� �������������ƴ���)
					

					//��带 �����ϱ� ���� ��尡 �����͸� �����Ҵ�� �޸��� �����ͷ� ������ �־��⶧����,
					//�����Ҵ�� �޸𸮸� delete ���� ���ش�.
					
					//ObjectList���� ���� ��带 ���ͷ����ͷ� erase���ش�.
				
		}
	} //while

	//while���� ������ ���� �޸� �����Ҵ� ����
	{
		{
			//AllUpdateObject�� iterator�� �ް� ��ȸ
			
			
				//iterator�� second�� ObjectList�� �ް�
			
				//ObjectList�� ���ͷ����͸� �޾Ƽ� �ٽ� ��ȸ
				
					//�ֿܼ�����Ʈ������ �� Object�� �ް�
					
					//��带 �����ϱ� ���� ��尡 �����͸� �����Ҵ�� �޸��� �����ͷ� ������ �־��⶧����,
					//�����Ҵ�� �޸𸮸� delete ���� ���ش�.
					
		}
		//AllUpdateObject�� ��带 ��� clear�Ѵ�.
		
	}
}
