/* 제곱 반환 함수 프로그램 */

#include "pch.h"
#include <iostream>
using namespace std;

int returnSquare(int inputS);

int main()
{
	int inputNum;
	cin >> inputNum;
	cout << returnSquare(inputNum);
	return 0;
}

int returnSquare(int inputS)
{
	return inputS * inputS;
}