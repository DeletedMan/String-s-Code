#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<list>
#include<queue>
#include<deque>

using namespace std;

bool isRotation(string str1,string str2)
{
	int len1=str1.length();
	int len2=str2.length();
	if(len1!=len2)
	{
		return false;
	}
	int count1[256]={0};
	int count2[256]={0};
	for(int i=0;i<len1;i++)
	{
		count1[str1[i]]++;
	}
	for(int j=0;j<len2;j++)
	{
		count2[str2[j]]++;
	}
	for(int i=0;i<len1;i++)
	{
		if(count1[i]!=count2[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		string str1;
		string str2;
		std::cin>>str1>>str2;
		if(isRotation(str1,str2))
		{
			std::cout<<"Yes"<<endl;
		}
		else
		{
			std::cout<<"No"<<endl;
		}
	}
	return 0;
}
