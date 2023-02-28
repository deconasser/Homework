#include <bits/stdc++.h>
using namespace std;
string Reverse(string s)
{	
	string cnt = "";
	for(int j = s.size()-1;j>=0;j--)
	{
		cnt=cnt+s[j];
	}
	return cnt;
}
int main()
{
	int t;
	cin >> t;
	int lmao = t;
	vector<string> v;
	while(t--)
	{
		string x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0 ; i < lmao-1;i++)
	{
		for(int j = i+1;j<lmao;j++)
		{
			if(v[i]==Reverse(v[j]))
			{
				cout << v[i].size() << " "<<v[i][v[i].size()/2];
				return 0;
			}
		}
	}

	return 0;
}