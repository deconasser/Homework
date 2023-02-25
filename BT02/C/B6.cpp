#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <=n;i++){
        a[i]=i;
    }
   
    for(int i = 1 ; i <= n ;i++){
        for(int j = 1;j<=n;j++){
            cout << a[j];
            if(j==n) cout << endl;
        }
        for(int j = 1 ;j<=n-1;j++){
            a[j] = a[j+1];          
        }
        a[n] = a[1];
        
    }
    return 0;
}