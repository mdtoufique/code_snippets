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


vector<ll> getDivisors(ll n) {
    vector<ll> divisors;
    
    for (ll i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    return divisors;
}