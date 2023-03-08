#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
     vector<int> v;
     vector<int> v2;
     int s1 = 0,s2 = 0;
     for(int i = 1; i <= n; i++)
     {
		v.push_back(i);
		v2.push_back(i);
		s2=s2*10+v2[i-1];
     }
     //cout << s2 << endl;
     for(int i = 0; i < n; i++)
     {
		cout << v[i];	
     }
     cout << endl;
     swap(v[n-1],v[n-2]);
     for(int i = 0; i < n; i++)
     {	
     	s1=s1*10+v[i];
		cout << v[i];	
     }
     cout << endl;
     int i = 2;
     //1 2 3
     //0 1 2
     while(s1!=s2)
     {
     	s1 = 0;
        swap(v[n-i],v[n-i-1]);
        for(int j = 0; j < n; j++)
     	{
     		s1=s1*10+v[j];	
   		}
   		if(s1!=s2)
		{
       		for(int j = 0; j < n; j++)
     		{
				cout << v[j];	
   			}
   		}
   		if(n-i-1==0){
            i = 1;
        } else ++i;
     	cout << endl; 
     }
     
     
    
    return 0;
}
