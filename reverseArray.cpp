#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int m,k;
    cin>>n;
    cin>>m;
    int arr[100];
    for ( int i = n ; i >=1; --i)
    {
        
        for ( k = 0 ; k < m; k++ )
        {
            cin>>arr[i];
        }
    }
    
    return 0;
}

