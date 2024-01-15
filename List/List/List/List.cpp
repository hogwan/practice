#include <iostream>
#include <assert.h>
#include <Windows.h>

#define MsgBoxAssert(msg) MessageBox(nullptr, msg, "치명적 에러", MB_OK);assert(false);

typedef int DataType;

//더미노드방식
class MyList
{
private:
	//노드 구현
	class ListNode
	{
	public:
		DataType Data;
		ListNode* Next;
		ListNode* Prev;
	};

public:
	//이터레이터 구현
	class iterator
	{
		friend MyList;
	public:
		//이터레이터의 생성자, 연산자 != ++ * 구현
		
	private:
		ListNode* CurNode;
	};
	//마이리스트 생성자 소멸자 구현
	

	//begin() end() 구현
	

	//push_back push_front erase 구현
	
private:
	ListNode* Start = new ListNode();
	ListNode* End = new ListNode();
};

int main()
{
	{
		std::cout << "내 리스트" << std::endl;
		MyList NewList = MyList();
		for (int i = 0; i < 10; i++)
		{
			NewList.push_front(i);
			// NewList.push_front();
		}

		MyList::iterator StartIter = NewList.begin();
		MyList::iterator EndIter = NewList.end();

		// 안된다.,
		//NewList[5];

		StartIter = NewList.erase(StartIter);

		for (/*std::list<int>::iterator StartIter = NewList.begin()*/
			; StartIter != EndIter
			; ++StartIter
			)
		{

			std::cout << *StartIter << std::endl;
			// std::cout << StartIter.operator*() << std::endl;
		}
	}
}