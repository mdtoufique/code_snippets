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


bool pr[1000010];
vector<ll>spv;
void sp()
{

	ll n=1000005;
	memset(pr, true, sizeof(pr));
 
	for (ll p = 2; p * p <= n; p++) {
  	 
    	if (pr[p] == true) {
       	 
        	for (ll i = p * p; i <= n; i += p)
            	pr[i] = false;
    	}
	}
	for(int i=2;i<=1000005;i++)
	{
    	if(pr[i])
    	{
        	spv.pb(i);
    	}
	}
 
}


std::vector<ll> sieveOfEratosthenes(int limit) {
	std::vector<bool> isPrime(limit + 1, true);
	std::vector<ll> primes;

	for (int p = 2; p * p <= limit; ++p) {
    	if (isPrime[p]) {
        	for (int i = p * p; i <= limit; i += p) {
            	isPrime[i] = false;
        	}
    	}
	}

	for (int p = 2; p <= limit; ++p) {
    	if (isPrime[p]) {
        	primes.push_back(p);
    	}
	}

	return primes;
}