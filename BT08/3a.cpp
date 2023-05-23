#include<bits/stdc++.h>
using namespace std;
using ll = long long;
queue<long long> q;
string s = "";
vector<string> v;

void init()
{
   s.push_back('9');
   q.push(stoll(s));
   v.push_back(s);
   while(1)
   {
      string k = to_string(q.front());
      q.pop();
      k += '0';
      q.push(stoll(k));
      v.push_back(k);
      
      k.pop_back();
      k+= '9';
      q.push(stoll(k));
      v.push_back(k);
      if(k.length()==10) break;
   }
}
int main()
{
   
   init();
   for(auto it : v)
   {
      cout << it << endl;
   }
   return 0;
}