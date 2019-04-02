/* 0~9까지 for문을 사용하여 출력하는 프로그램 */

#include "pch.h"
#include <iostream>
using namespace std;

void printResult(int inputPR)
{
	cout << "출력: " << inputPR << endl;
	return;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		printResult(i);
	}
	return 0;
}