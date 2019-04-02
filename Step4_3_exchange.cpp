/* 두 변수의 값을 교환하는 함수 */

#include "pch.h"
#include <iostream>
using namespace std;

void exchange(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << endl << num2;
	return;
}

int main()
{
	int inputNum1, inputNum2;
	cin >> inputNum1 >> inputNum2;
	exchange(inputNum1, inputNum2);
	return 0;
}