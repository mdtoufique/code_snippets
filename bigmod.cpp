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


ll bigmod(ll n, ll p){
	if(p==0)
    	return 1;
	ll tmp=bigmod(n, p/2);
	if(p & 1)
    	return (((n*tmp)%MOD)*tmp)%MOD;
	else
    	return (tmp*tmp)%MOD;
}

ll bigmod(ll n, ll p){
	if(p==0)
    	return 1;
    
	if(p%2== 1)
	{
    	ll a=n%mod;
    	ll b=bigmod(n,p-1)%mod;
    	return (a*b)%mod;
	}
  	 
	else
	{
    	ll a=bigmod(n,p/2)%mod;
   	 
    	return (a*a)%mod;
	}
}
 