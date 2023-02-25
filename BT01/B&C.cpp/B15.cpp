#include<bits/stdc++.h>
using namespace std;
int main()
{

    string x="a"; cout << x << endl;
    string y = "b";cout << y << endl;
    string y = "b";cout << y << endl;
    string t;
    for(int i = 0 ; i < 8;i++)
    {
        t = y + x;
        x = y;
        y = t;
        cout << t <<endl;
    }
    return 0;
}
