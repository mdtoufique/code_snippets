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


ll fac[200005]={0};
void factorial()
{
	fac[0]=0;
	fac[1]=1;
	for(int i=2;i<=200001;i++)
	{
    	fac[i]=fac[i-1]*i;
	}
}

ll nCr(ll n, ll r)
{
	return fac[n] / (fac[r] * fac[n - r]);
}

ll nCr(int n, int r)
{
 
    
	long long p = 1, k = 1;
 
	if (n - r < r)
    	r = n - r;
 
	if (r != 0) {
    	while (r) {
        	p *= n;
        	k *= r;
 
        	long long m = __gcd(p, k);
 
        	p /= m;
        	k /= m;
 
        	n--;
        	r--;
    	}
 
	}
 
	else
    	p = 1;
 
	return p;
}

//moded nCr

#define lim 300000
ll fact[lim+1];
 
void factorial()
{
	fact[0]=1;
	for(int i=1;i<=lim;i++)
	{
    	fact[i]=(fact[i-1]*i)%mod;
	}
}
ll bigmod(ll n, ll p)
{
	if(p==0)
	{
    	return 1;
	}
	ll tmp=bigmod(n, p/2);

	if(p & 1)
    	return (((n*tmp)%MOD)*tmp)%MOD;
	else
    	return (tmp*tmp)%MOD;
}
ll nCr(ll n, ll r){
	if(r>n)
	{
    	return 0;
	}
	ll a=fact[n];
	ll b=fact[n-r]*fact[r];
	b%=mod;
	b=bigmod(b, mod-2);
	return (a*b)%mod;
}
 