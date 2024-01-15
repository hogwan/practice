#include <iostream>
#include <Windows.h>
#include <assert.h>

#define MsgBoxAssert(msg) MessageBoxA(nullptr, msg, "치명적 에러", MB_OK);assert(false);

template<typename DataType>
class CArray
{
public:
	//생성자, 복사생성자, 소멸자
	
	//연산자 =, []
	
	//Num() => 사이즈 리턴
	
	//동적 할당 resize 구현
	
	//깊은 복사 구현
	
	//Release구현
	
	

private:
	int NumValue = 0;
	DataType* ArrPtr = nullptr;
};


template<typename DataType>
class MyVector
{
public:
	//resize구현
	
	//reserve구현
	

	//연산자 [] 구현
	
	//emplace_back 구현
	
	//push_back구현
	
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

		// 미리 push_back을 10번 한다는 것이 바로 resize이다.
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