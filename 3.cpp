#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , flag =0;
	cin >> n;
	if ( n == 0 || n == 1)
	{
		cout<<"NOT PRIME";
	}

    for (int i = 2 ; i <= n/2 ; i++)
    {
    	if (n%i == 0)
    	{
    		cout<<"not prime";
    		flag = 1;
    		break;
			
		}
	}
	if (flag == 0)
	{
		cout<<"prime";
	}
	return(0);
}
