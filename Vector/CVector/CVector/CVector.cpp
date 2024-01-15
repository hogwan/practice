#include <iostream>
#include <Windows.h>
#include <assert.h>

#define MsgBoxAssert(msg) MessageBoxA(nullptr, msg, "ġ���� ����", MB_OK);assert(false);

template<typename DataType>
class CArray
{
public:
	//������, ���������, �Ҹ���
	
	//������ =, []
	
	//Num() => ������ ����
	
	//���� �Ҵ� resize ����
	
	//���� ���� ����
	
	//Release����
	
	

private:
	int NumValue = 0;
	DataType* ArrPtr = nullptr;
};


template<typename DataType>
class MyVector
{
public:
	//resize����
	
	//reserve����
	

	//������ [] ����
	
	//emplace_back ����
	
	//push_back����
	
	//capacity()
	
	//size()
	
	//clear()
	
	
private:
	int sizeValue = 0;
	CArray<DataType> Array;
};

int main()
{
	std::cout << "MyVector" << std::endl;

	{
		MyVector<int> ArrVector = MyVector<int>();

		// �̸� push_back�� 10�� �Ѵٴ� ���� �ٷ� resize�̴�.
		// ArrVector.resize(10);
		// ArrVector.reserve(10);
		for (int i = 0; i < 10; i++)
		{
			// ArrVector.push_back(i);
			ArrVector.emplace_back();
			std::cout << "capacity : " << ArrVector.capacity() << std::endl;
			std::cout << "size : " << ArrVector.size() << std::endl;
		}


		ArrVector.clear();
		std::cout << "Clear " << std::endl;
		std::cout << "capacity : " << ArrVector.capacity() << std::endl;
		std::cout << "size : " << ArrVector.size() << std::endl;

	}
}