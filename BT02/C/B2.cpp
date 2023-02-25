#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n+1;i++)
    {
        for(int j = 0; j <= cnt ; j++)
        {
            cout << " ";
        }
        for(int j = cnt + 1; j < n+1 ; j++){
            cout << "*";
            if(j==n) cout << endl;

        }
        cnt++;      
    }
    return 0;
}