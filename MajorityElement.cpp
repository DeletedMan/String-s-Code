#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>

using namespace std;

int majorityElement(int a[],int size)
{
	sort(a,a+size);
	
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n;
		std::cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		int temp=majorityElement(arr,n);
		if(temp>1)
		{
			std::cout<<temp<<endl;
		}
		else
		{
			std::cout<<"-1"<<endl;
		}
	}
	return 0;
}
