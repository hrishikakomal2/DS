#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cout<<"the number of variable-length arrays ";
    cin>>n;
    cout<<"no. of array elements:";
    cin>>m;
    
    for ( int i = n ; i >=1; --i)
    {
        int arr[m],k;
        
        for ( k = 0 ; k < m; k++ )
        {
            cin>>arr[k];
        }
    }
    
    return 0;
}
