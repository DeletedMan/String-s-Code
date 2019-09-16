#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<queue>
#include<list>

using namespace std;

void MaxOccuringChar(string str)
{
	sort(str.begin(),str.end());
	int i,max_count=1,count=1;
	char max_curr,curr;
	for(i=0;i<str.length();i++)
	{
			if(str[i]==str[i+1])
			{
				count++;
				curr=str[i];
				if(count>max_count && curr<max_curr)
				{
					max_count=count;
					max_curr=curr;
				}
			}
	}
	//std::cout<<max_count<<endl;
	std::cout<<max_curr<<endl;
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		string str;
		std::cin>>str;
		MaxOccuringChar(str);
	}
	return 0;
}
