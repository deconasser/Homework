#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int p = 1e7, q = 1e7;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        p = min(p, a);
        q = min(q, b);
    }
    cout << p * q;
}