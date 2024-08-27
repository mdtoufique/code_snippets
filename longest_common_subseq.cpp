#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define pb              push_back
#define cn              continue;
#define br              break;
#define nn              cout << "\n";
#define N               cout << "NO\n";
#define Y               cout << "YES\n";
#define v(a)            a.begin(),a.end()
#define rem(s,a)        s.erase(remove(s.begin(), s.end(), a),s.end());
#define ft(fao,it)      for(auto it=fao.begin();it!=fao.end();it++)      
#define fr(i,j,n)       for(i=j;i<n;i++)
#define frm(i,n,j)      for(i=n;i>=j;i--)   
ll mod=1e9+7;
ll MOD=1e9+7;

int lcs(vector<ll> x, vector<ll>y, ll n)
{
	int L[n+ 1][n + 1];
	int i, j;
 
   
	for (i = 0; i <= n; i++) {
    	for (j = 0; j <= n; j++) {
        	if (i == 0 || j == 0)
            	L[i][j] = 0;
 
        	else if (x[i - 1] == y[j - 1])
            	L[i][j] = L[i - 1][j - 1] + 1;
 
        	else
            	{L[i][j] = max(L[i - 1][j], L[i][j - 1]);}
    	}
	}
 
	return L[n][n];
}