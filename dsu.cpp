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

ll par[100005];
void create_set()
{
    int k=0;
    for(ll i=0;i<=100000;i++)
    {
        par[i]=i;
        //cout<<par[i]<<i;
    }
}
ll find_set(ll i)
{
    //printf("%c %c\n",i,par[i]);
    
    if(par[i]==i)
    {
        
        return i;
    }
    
    par[i]=find_set(par[i]);
    return par[i];
    
}
void union_set(ll i,ll j)
{
    
    ll u=find_set(i);
    ll v=find_set(j);

    if(u!=v)
    {
        par[u]=v;
    }
    
    // if(par[i]!=par[j])
    // {
    //     par[par[i]]=par[j];
    // }
}
bool is_same_set(ll i,ll j)
{
    return find_set(i)== find_set(j); 
}