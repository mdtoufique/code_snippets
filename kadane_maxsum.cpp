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


ll maxsum(vector<ll>arr)
{

	ll msf = LONG_LONG_MIN, meh = 0,n=arr.size();

	for (ll i = 0; i < n; i++)
	{
    	meh = meh + arr[i];
    	if (msf < meh)
        	msf = meh;

    	if (meh < 0)
        	meh = 0;
	}
	return max(msf,(ll)0);
}

