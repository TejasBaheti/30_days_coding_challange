#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str1,str2;
	
	cout<<"Enter string 1 : ";
	cin>> str1;
	
	cout<<"Enter string 2 : ";
	cin>> str2;
	
	if(str1.length()==str2.length())
	{
		sort(str1.begin(),str1.end());
	 	sort(str2.begin(),str2.end());
		
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]==str2[i])
			{
				cout<<"Given strings are Anagram";
			}
			
			else
			{
				cout<<"strings are not anagram ";
			}
			break;
		}
	}
	else
	{
		cout<<"strings are not anagram ";	
	}
	return 0;
}
