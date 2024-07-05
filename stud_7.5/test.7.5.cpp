#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include"string.7.5.h"
#include<string>


namespace luow
{
	template<typename T>
	void swap(T& left, T& right)
	{
		T temp = left;
		left = right;
		right = temp;
	}
}



int main()
{
	luow::test_string2();

	return 0;
}