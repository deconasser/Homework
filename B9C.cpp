#include<bits/stdc++.h>
using namespace std;
int Number(int n)
{
    return rand()%n;
}

int main()
{
    int n;
    cin >> n;
    cout << Number(n);
    return 0;
}