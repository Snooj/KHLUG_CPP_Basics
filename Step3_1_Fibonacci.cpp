/* 피보나치 수열 출력 프로그램 */


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intnum,pibo1=1, pibo2=1,pibo3=0;
	cin >> intnum;
	cout << pibo1 <<endl<< pibo2<<endl;
	while ((pibo2+pibo3)<intnum)
	{
		pibo3 = pibo1 + pibo2;
		pibo1 = pibo2;
		pibo2 = pibo3;
		cout << pibo3<<endl;
	}
	return 0;
     
}
