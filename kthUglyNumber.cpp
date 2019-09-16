#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include<stack>
#include<deque>
#include<queue>
using namespace std;

void getNthUglyNumber(int n)
{
	int i_2=0,i_3=0,i_5=0;
	int ugly[n];
	ugly[0]=1;
	int next_ugly_number=1;
	int mul_2=2;
	int mul_3=3;
	int mul_5=5;
	for(int i=1;i<n;i++)
	{
		next_ugly_number=min(mul_2,min(mul_3,mul_5));
		ugly[i]=next_ugly_number;
		if(next_ugly_number==mul_2)
		{
			i_2=i_2+1;
			mul_2=ugly[i_2]*2;
		}
		if(next_ugly_number==mul_3)
		{
			i_3=i_3+1;
			mul_3=ugly[i_3]*3;
		}
		if(next_ugly_number==mul_5)
		{
			i_5=i_5+1;
			mul_5=ugly[i_5]*5;
		}
	}
	std::cout<<next_ugly_number<<endl;
	return;
}
int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
	    int n;
		std::cin>>n;
		getNthUglyNumber(n);
	}
	return 0;
}
