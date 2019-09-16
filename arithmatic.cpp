#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

void arithmatic(unsigned long long int arr[],unsigned long long int n)
{
	int flag=0;
	int first_term=arr[0];
	int comm_diff=(arr[n-1]-first_term)/n;
	//std::cout<<comm_diff<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i]+comm_diff!=arr[i+1])
		{
			flag=1;
			std::cout<<arr[i]+2<<endl;
			break;
		}
	}
	if(flag==0)
	{
		std::cout<<"Not Found"<<endl;
	}
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned long long int n;
		std::cin>>n;
		unsigned long long int *arr=new unsigned long long int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		arithmatic(arr,n);
	}
	return 0;
}
