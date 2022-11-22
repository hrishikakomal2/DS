//Hrishika komal

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1 , str2;
	str1 = "hrishika";
	str2 = "komal";
	string con = str1 + str2;
//	cout<<con;
//	cout<<" ";
//	cout<<"reverse string is :";
//	for(int i = con.length() -1 ; i>=0; i--)
//	{
//		cout<<con[i];
//	}
    for(int i = 0 ; i < con.length() -1 ; i++)
    {
    	if(con[i]/2 == 0)
    	{
    		cout<<con[i];
		}
    	
    	
	}
}
 

