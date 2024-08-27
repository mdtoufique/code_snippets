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


ll targetValue=30;
ll dp[31]={0};

int findMinimumCoins(ll coins[], ll numCoins)
{

	for(int i=1;i<=targetValue;i++)
	{
    	dp[i]=LONG_LONG_MAX;
	}
	for(int i=0;i<numCoins;i++)
	{
    	dp[coins[i]]=1;
	}
	for(int i=0;i<numCoins;i++)
	{
    	for(int j=coins[i];j<=targetValue;j++)
    	{
        	dp[j]=min(dp[j-coins[i]]+1,dp[j]);
        	//cout<<coins[i]<<" "<<j<<" "<<dp[j];nn
    	}
	}
    
	return dp[targetValue];
    
    
}