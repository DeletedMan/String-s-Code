#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>

using namespace std;

const int no_of_char=256;
void SmallestWindows(string str,string pat)
{
	int len1=str.length();
	int len2=pat.length();
	
	if(len1<len2)
	{
		std::cout<<"No such windows exist"<<endl;
		return;
	}
	int hash_pat[no_of_char]={0};
	int hash_str[no_of_char]={0};
	int i;
	for(i=0;i<len2;i++)
	{
		hash_pat[pat[i]]++;
	}
	int start=0,start_index=-1,min_len=INT_MAX;
	int count=0;
	for(int j=0;j<len1;j++)
	{
		hash_str[str[j]]++;
		if()
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		string str;
		string pat;
		std::cin>>str;
		std::cin>>pat;
		SmallestWindows(str,pat);
	}
	return 0;
}

