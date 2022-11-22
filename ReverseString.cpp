#include<bits/stdc++.h>
using namespace std;
 
 string isPalin(string s)
 {
 	for (int i =0 ; i < s.length() /2 ; i++)
 	{
 		if( s[0]!=s[s.length() -i -1])
 		{
 			return "Not Palindrome";
		 }
	 }
	 return "Palindrome";
 }

int main()
{
	string s;
	cout<<"Your string :";
	cin>>s;
	cout<<isPalin(s);
	 return 0;
}
