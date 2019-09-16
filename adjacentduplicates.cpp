#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<cstring>

using namespace std;

char *fucking_Beast(char *str,int len)
{
	int k=0;
	int i;
	for(i=1;i<len;i++)
	{
		if(str[i]!=str[i-1])
		{
			str[k++]=str[i-1];
		}
		else
		{
			while(str[i]==str[i-1])
			{
				i++;
			}
		}
	}
	str[k++]=str[i-1];
	str[k]='\0';
	if(k!=len)
	{
		fucking_Beast(str,k);
	}
	return str;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		char str[100];
		std::cin>>str;
		int len=strlen(str);
		char *fuck=fucking_Beast(str,len);
		std::cout<<fuck<<endl;
	}
	return 0;
}
