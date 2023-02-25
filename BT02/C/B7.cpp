#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    bool b=false;
    int tam = -1e9;
    while(!b){
        int x;
        cin >> x;
        if(x != tam) cout << x << " ";
        tam = x;
        if(x<0) b = true;
    }

    return 0;
}