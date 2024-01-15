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

		//containsNode ����(������ ����, ũ�� ������)
		

		//Release
		//�θ� �� ����Ű�� �����͸� ����
		

		//minnode() =>�����ڽ��� ���������� Ž���� ������ �ڽŸ���
		//maxnode() =>�������ڽ��� ���������� Ž���� ������ �ڽŸ���
		

		//OverParent
		//�ڽź��� ū �θ� ���������� ��� �θ�� �̵�, �θ� nullptr�̸� nullptr��ȯ
		

		//SmallParnet
		////�ڽź��� ���� �θ� ���������� ��� �θ�� �̵�, �θ� nullptr�̸� nullptr��ȯ
		

		//����,����,������ȸ firstOrderPrint,mid,last
		

		//������ȸ�ϸ鼭 �ڽ��� delete
		
		
		//NextNode
		//������ �ڽ��� �ִٸ� �����ʳ���߿� ����������帮��,
		//������ �ڽ��� ���ٸ� �θ��߿� �����ٴ� ū ��� ����
		

		//PrevNode
		//���� �ڽ��� �ִٸ� ���ʳ���߿� ����ū��帮��,
		//���� �ڽ��� ���ٸ� �θ��߿� �����ٴ� ���� ��� ����
		

		//IsLeaf()
		

		//findNode
		//ũ�� �������ڽ�, ������ �����ڽ� ã�Ƽ� ��������͸���
		

		//insertNode
		//�ڽ��� ������ ����� �θ�� ���
		//�ڽ��� Ű�� ���Գ���� Ű���� ũ�� �����ڽ��ִ��� Ȯ���ϰ� ������ ����,
		//������ �����ڽ����� �������鼭 �ݺ�
		//�ڽ��� Ű�� ���Գ���� Ű���� ������� �ݴ�
		
	}; // MapNode

public:
	class iterator
	{
		friend MyMap;
	public:
		//���ͷ����� �����ڱ���
		

		//���۷����� ->, !=, ++ ����
		
	private:
		MapNode* CurNode = nullptr;
	};

	//operator[] ����
	//��Ʈ�� ������ �����, ��Ʈ�� ���� ��, index������ ����
	//������ ���� �����ϰ� ������ �ִ´�� Value��ȯ
	

	//���ο� �ʳ�带 ����� pair���� �־��ְ�,
	//��Ʈ�� ������ ���ο� �ʳ�带 ��Ʈ�� ����
	//��Ʈ�� ������ ��Ʈ��忡�� insertNode
	

	//erase ����
	iterator erase(iterator& _Iter)
	{
		//�ؽ�Ʈ��带 ����
		
		
		//�����Ϸ��� ��尡 ��������� �θ��� ������ ���� delete�ϰ� ����
		

		//�ڽ��� �ϳ��� �ִٸ�
		//�ٲ��� ��带 ã�´� => ���� �������ڽ��� �ּ�ã�� ������ �����ڽ��� �ִ�
		

		//�ٲ��ٳ�带 ����Ű�� �θ��� ������ ����
		

		//�ٲ��ٳ�尡 �θ� ����Ű�� ���ᵵ ���´�.
		

		//�����ڽİ� ������ �ڽ��� �ִٸ� �ٲ��ٳ�带 �θ�ν� �������ְ�,
		//�ڱ� �ڽ��� �ƴ϶�� �ٲ��ٳ�嵵 �� �ڽĿ� �����Ѵ�.
		

		//�ٲ��� ����� �θ� ��������� �θ�� �����Ѵ�
		

		//������尡 �θ��� �����ڽ��̾��ٸ� �θ��� �����ڽ����� �ٲ��س�带 �����ϰ�,
		//�������̸� ���������� �����Ѵ�.
		

		//�ڽ��� ��Ʈ���ٸ� ��Ʈ�� �ٲ��س��� ��ü
		

		//����
		
		//���ϳ�� ����
		
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

		// �ȵɼ��� �ִ�.
		return Root->containsNode(_Key);
	}
	iterator find(const KeyType& _Key)
	{
		if (nullptr == Root)
		{
			return end();
		}

		// �ȵɼ��� �ִ�.
		return iterator(Root->findNode(_Key));
	}

	iterator begin()
	{
		if (nullptr == Root)
		{
			return end();
		}

		// �ȵɼ��� �ִ�.
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
		std::cout << "�� ��" << std::endl;
		//      Key   Value
		MyMap<int,int> NewMap = MyMap<int, int>();

		// �������� ������ => ū���� ������ �˴ϴ�.
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