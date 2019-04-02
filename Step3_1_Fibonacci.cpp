/* 피보나치 수열 출력 프로그램 */


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intnum,fibo1=1, fibo2=1,fibo3=0;
	cin >> intnum;
	cout << fibo1 <<endl<< fibo2<<endl;
	while ((fibo2+fibo3)<intnum)
	{
		fibo3 = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo3;
		cout << fibo3<<endl;
	}
	return 0;
     
}
