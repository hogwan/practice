#include<iostream>
#include <map>

template<typename KeyType, typename ValueType>
class MyPair
{
public:
	MyPair()
	{

	}

	MyPair(KeyType _first, ValueType _second)
		:Key(_first), Value(_second)
	{

	}

	KeyType Key = KeyType();
	ValueType Value = ValueType();
};

template<typename KeyType, typename ValueType>
class MyMap
{
private:
	class MapNode
	{
	public:
		MyPair<KeyType, ValueType> Pair;
		MapNode* Parent = nullptr;
		MapNode* LeftChild = nullptr;
		MapNode* RightChild = nullptr;

		//containsNode 구현(작으면 왼쪽, 크면 오른쪽)
		

		//Release
		//부모가 날 가르키는 포인터를 끊음
		

		//minnode() =>왼쪽자식이 없을때까지 탐색후 없으면 자신리턴
		//maxnode() =>오른쪽자식이 없을때까지 탐색후 없으면 자신리턴
		

		//OverParent
		//자신보다 큰 부모가 있을때까지 계속 부모로 이동, 부모가 nullptr이면 nullptr반환
		

		//SmallParnet
		////자신보다 작은 부모가 있을때까지 계속 부모로 이동, 부모가 nullptr이면 nullptr반환
		

		//중위,전위,후위순회 firstOrderPrint,mid,last
		

		//후위순회하면서 자신을 delete
		
		
		//NextNode
		//오른쪽 자식이 있다면 오른쪽노드중에 가장작은노드리턴,
		//오른쪽 자식이 없다면 부모중에 나보다는 큰 노드 리턴
		

		//PrevNode
		//왼쪽 자식이 있다면 왼쪽노드중에 가장큰노드리턴,
		//왼쪽 자식이 없다면 부모중에 나보다는 작은 노드 리턴
		

		//IsLeaf()
		

		//findNode
		//크면 오른쪽자식, 작으면 왼쪽자식 찾아서 노드포인터리턴
		

		//insertNode
		//자신을 삽입할 노드의 부모로 삼고
		//자신의 키가 삽입노드의 키보다 크면 왼쪽자식있는지 확인하고 없으면 삽입,
		//있으면 왼쪽자식으로 내려가면서 반복
		//자신의 키가 삽입노드의 키보다 작을경우 반대
		
	}; // MapNode

public:
	class iterator
	{
		friend MyMap;
	public:
		//이터레이터 생성자구현
		

		//오퍼레이터 ->, !=, ++ 구현
		
	private:
		MapNode* CurNode = nullptr;
	};

	//operator[] 구현
	//루트가 없으면 만들고, 루트가 있을 때, index유무에 따라
	//없으면 만들어서 삽입하고 있으면 있는대로 Value반환
	

	//새로운 맵노드를 만들어 pair값을 넣어주고,
	//루트가 없으면 새로운 맵노드를 루트로 설정
	//루트가 있으면 루트노드에서 insertNode
	

	//erase 구현
	iterator erase(iterator& _Iter)
	{
		//넥스트노드를 리턴
		
		
		//제거하려는 노드가 리프노드라면 부모의 연결을 끊고 delete하고 리턴
		

		//자식이 하나라도 있다면
		//바꿔줄 노드를 찾는다 => 먼저 오른쪽자식의 최소찾고 없으면 왼쪽자식의 최대
		

		//바꿔줄노드를 가리키는 부모의 연결을 끊고
		

		//바꿔줄노드가 부모를 가리키는 연결도 끊는다.
		

		//왼쪽자식과 오른쪽 자식이 있다면 바꿔줄노드를 부모로써 연결해주고,
		//자기 자신이 아니라면 바꿔줄노드도 그 자식에 연결한다.
		

		//바꿔준 노드의 부모를 원래노드의 부모로 연결한다
		

		//원래노드가 부모의 왼쪽자식이었다면 부모의 왼쪽자식으로 바꿔준노드를 연결하고,
		//오른쪽이면 오른쪽으로 연결한다.
		

		//자신이 루트였다면 루트를 바꿔준노드로 교체
		

		//삭제
		
		//리턴노드 리턴
		
	}

	~MyMap()
	{
		clear();
	}
	bool contains(const KeyType& _Key)
	{
		if (nullptr == Root)
		{
			return false;
		}

		// 안될수도 있다.
		return Root->containsNode(_Key);
	}
	iterator find(const KeyType& _Key)
	{
		if (nullptr == Root)
		{
			return end();
		}

		// 안될수도 있다.
		return iterator(Root->findNode(_Key));
	}

	iterator begin()
	{
		if (nullptr == Root)
		{
			return end();
		}

		// 안될수도 있다.
		return iterator(Root->minnode());
	}

	iterator end()
	{
		return iterator(nullptr);
	}

	void firstOrderPrint()
	{
		Root->firstOrderPrint();
		return;
	}

	void midOrderPrint()
	{
		Root->midOrderPrint();
		return;
	}

	void lastOrderPrint()
	{
		Root->lastOrderPrint();
		return;
	}

	void clear()
	{
		Root->clearNode();
		Root = nullptr;

		return;
	}
	MapNode* Root = nullptr;
};

int main()
{
	{
		std::cout << "내 맵" << std::endl;
		//      Key   Value
		MyMap<int,int> NewMap = MyMap<int, int>();

		// 오름차순 작은수 => 큰수로 정렬이 됩니다.
		// NewMap.insert(MyPair(10, 0));
		NewMap[10] = 0;
		// NewMap[10].insert(MyPair(10, 0));

		NewMap.insert(MyPair<int,int>(5, 0));
		NewMap.insert(MyPair<int, int>(15, 0));
		NewMap.insert(MyPair<int, int>(12, 99));
		NewMap.insert(MyPair<int, int>(3, 0));
		NewMap.insert(MyPair<int, int>(7, 0));

		if (true == NewMap.contains(12))
		{
			int a = 0;
		}


		//MyMap::iterator FindIter =  NewMap.find(12);
		//std::cout << "Key : " << FindIter->Key << std::endl;
		//std::cout << "Value : " << FindIter->Value << std::endl;

		//MyMap::iterator FindIter = NewMap.find(10);
		//NewMap.erase(FindIter);

		/*std::cout << "first" << std::endl;
		NewMap.firstOrderPrint();
		std::cout << "mid" << std::endl;
		NewMap.midOrderPrint();
		std::cout << "last" << std::endl;
		NewMap.lastOrderPrint();*/

		MyMap<int,int>::iterator StartIter = NewMap.begin();
		MyMap<int,int>::iterator EndIter = NewMap.end();



		for (/*std::list<int>::iterator StartIter = NewList.begin()*/
			; StartIter != EndIter
			; ++StartIter)
		{
			std::cout << StartIter->Key << std::endl;
			//std::cout << StartIter->second << std::endl;
		}
	}
}