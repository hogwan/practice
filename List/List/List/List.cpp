#include <iostream>
#include <assert.h>
#include <Windows.h>

#define MsgBoxAssert(msg) MessageBox(nullptr, msg, "ġ���� ����", MB_OK);assert(false);

typedef int DataType;

//���̳����
class MyList
{
private:
	//��� ����
	class ListNode
	{
	public:
		DataType Data;
		ListNode* Next;
		ListNode* Prev;
	};

public:
	//���ͷ����� ����
	class iterator
	{
		friend MyList;
	public:
		//���ͷ������� ������, ������ != ++ * ����
		
	private:
		ListNode* CurNode;
	};
	//���̸���Ʈ ������ �Ҹ��� ����
	

	//begin() end() ����
	

	//push_back push_front erase ����
	
private:
	ListNode* Start = new ListNode();
	ListNode* End = new ListNode();
};

int main()
{
	{
		std::cout << "�� ����Ʈ" << std::endl;
		MyList NewList = MyList();
		for (int i = 0; i < 10; i++)
		{
			NewList.push_front(i);
			// NewList.push_front();
		}

		MyList::iterator StartIter = NewList.begin();
		MyList::iterator EndIter = NewList.end();

		// �ȵȴ�.,
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