#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x%400==0 || (x%4==0&&x%100!=0)) cout << "true";
    else cout << "false";
    return 0;
}
