#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<list>
#include<deque>
#include<queue>

using namespace std;

bool isAnagram(string str1,string str2)
{
	int len1=str1.length();
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	for(int i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str1;
		string str2;
		std::cin>>str1>>str2;
		if(isAnagram(str1,str2))
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
