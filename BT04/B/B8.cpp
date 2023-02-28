#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<int> nam;
    vector<int> nu;
    for(int i = 0 ;  i < n ;i++)
    {
        int x,y;
        cin >> x >> y;
        nam.push_back(x);
        nu.push_back(y);
    }
    sort(nam.begin(),nam.end());
    sort(nu.begin(),nu.end());
        for(int i = 0 ; i < n ; i++)
        {
            if(nu[i] >= nam[i])
            {
                cout << "No";
                return 0;
            }
        }
    cout << "yes";
    return 0;
}