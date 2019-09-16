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
		int fact,count=0;
		unsigned long long int n;
		std::cin>>n;
		int i,j;
		for(i=1;i<=n;i++)
		{
			fact=0;
			for(j=1;j<=n;j++)
			{
				if(i%j==0)
				{
					fact++;
				}
			}
			if(fact==2)
			{
				count++;
				std::cout<<i<<" ";
			}
		}
		std::cout<<endl;
		std::cout<<"Number of the prime is"<<endl;
	    std::cout<<count<<endl;
	}
	
	return 0;
}
