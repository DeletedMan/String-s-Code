#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<list>
#include<queue>
#include<deque>

void longestCommonSubstring(string str1,string str2)
{
	
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n,m;
		std::cin>>n>>m;
		char str1[n];
		char str2[m];
		std::cin>>str1;
		std::cin>>str2;
		longestCommonSubstring(str1,str2);
	}
	return 0;
}
