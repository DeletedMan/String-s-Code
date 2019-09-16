#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>

using namespace std;

void fuckingBeast(string str,int n)
{
	if(n==1)
	{
		std::cout<<str;
	}
	int len=str.length();
	string arr[n];
	int row=0;
	int down;
	for(int i=0;i<len;i++)
	{
		arr[row].push_back(str[i]);
		if(row==n-1)
		{
			down=false;
		}
		if(row==0)
		{
			down=true;
		}
		(down)?(row++):(row--);
	}
	for(int j=0;j<n;j++)
	{
		std::cout<<arr[j];
	}
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		string str;
		int n;
		std::cin>>str;
		std::cin>>n;
		fuckingBeast(str,n);
		std::cout<<endl;
	}
	return 0;
}
