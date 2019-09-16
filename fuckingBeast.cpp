#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<stack>
#include<list>
using namespace std;

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned long long int n;
		std::cin>>n;
		int count=0;
		int i;
		for(i=11;i<=n;i++)
		{
			if(i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0 && i%10!=0)
			{
				count++;
			}
		}
		std::cout<<count<<endl;
	}
	return 0;
}
