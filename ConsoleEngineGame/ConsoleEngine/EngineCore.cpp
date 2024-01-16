#include "EngineCore.h"
#include <time.h>
void EngineCore::init(int2 _ScreenSize)
{
	//릭체크
	LeakCheck;
	//스크린을 만들고, 랜덤시드 생성
	Screen.CreateScreen(_ScreenSize.X, _ScreenSize.Y);
	srand(time(0));
}

void EngineCore::Start()
{
	//엔진업데이트가 켜져있을때 루프
	while (EngineUpdate)
	{
		//프레임생성(프로세스를 잠깐멈춤)
		Sleep(100);

		//모든 매니저 업데이트
		{
			//AllManager의 iterator을 받고 순회
			
				//iterator의 second를 Object로 받고
				
				//에러체크(Object가 nullptr인지아닌지)
				

				//오브젝트들 업데이트
		
		}

		//모든 콘솔오브젝트 업데이트
		{
			
			//AllUpdateObject의 iterator을 받고 순회
			
				//iterator의 second를 ObjectList로 받고
				
				//ObjectList의 이터레이터를 받아서 다시 순회
				
					//콘솔오브젝트포인터 인 Object를 받고
					
					//에러체크(Object가 nullptr인지아닌지)
					
					//오브젝트 업테이트
				


		}

		//모든 콘솔오브젝트 랜더
		{
			//AllRenderObject의 iterator을 받고 순회

				//iterator의 second를 ObjectList로 받고

				//ObjectList의 이터레이터를 받아서 다시 순회

					//콘솔오브젝트포인터 인 Object를 받고

					//에러체크(Object가 nullptr인지아닌지)

					//오브젝트 업테이트

		}

		//랜더가 완료된 스크린을 출력
		
		//랜더 릴리즈 구조
		{
			//AllRenderObject의 iterator을 받고 순회
			
				//iterator의 second를 ObjectList로 받고
				

				//ObjectList의 이터레이터를 받아서 다시 순회
				
					//콘솔오브젝트포인터 인 Object를 받고
					

					//Object가 IsPendingKill이 아니면 continue
					

					//에러체크(오브젝트가 널포인터인지아닌지)
					

					//ObjectList에서 현재 노드를 이터레이터로 erase해준다.
					
				
			
		}

		//// 업데이트 릴리즈 구조
		{
			//AllUpdateObject의 iterator을 받고 순회
			
				//iterator의 second를 ObjectList로 받고
				
				//ObjectList의 이터레이터를 받아서 다시 순회
				
					//콘솔오브젝트포인터 인 Object를 받고
					
					//Object가 IsPendingKill이 아니면 continue
					

					//에러체크(오브젝트가 널포인터인지아닌지)
					

					//노드를 삭제하기 전에 노드가 데이터를 동적할당된 메모리의 포인터로 가지고 있었기때문에,
					//동적할당된 메모리를 delete 먼저 해준다.
					
					//ObjectList에서 현재 노드를 이터레이터로 erase해준다.
				
		}
	} //while

	//while문이 끝나고 남은 메모리 동적할당 해제
	{
		{
			//AllUpdateObject의 iterator을 받고 순회
			
			
				//iterator의 second를 ObjectList로 받고
			
				//ObjectList의 이터레이터를 받아서 다시 순회
				
					//콘솔오브젝트포인터 인 Object를 받고
					
					//노드를 삭제하기 전에 노드가 데이터를 동적할당된 메모리의 포인터로 가지고 있었기때문에,
					//동적할당된 메모리를 delete 먼저 해준다.
					
		}
		//AllUpdateObject의 노드를 모드 clear한다.
		
	}
}
