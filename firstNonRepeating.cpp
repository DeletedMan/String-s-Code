#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<cstring>
#define No_Of_Char 256

using namespace std;

int *func_kUtil(char* str)
{
	int *count=(int*)calloc(sizeof(int),No_Of_Char);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		count[str[i]]++;
	}
	return count;
}

int func_k(char* str)
{
	int *count=func_kUtil(str);
	int index=-1;
	for(i=0;i<strlen(s
	int i;tr);i++)
	{
		if(count[str[i]]==1)
		{
			index=i;
			break;
		}
	}
	free(count);
	return index;
}
int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		long long int n;
		std::cin>>n;
		char str[n];
		std::cin>>str;
		int index=func_k(str);
		if(index==-1)
		{
			std::cout<<"-1"<<endl;
		}
		else
		{
			std::cout<<str[index]<<endl;
		}
	}
	return 0;
}
