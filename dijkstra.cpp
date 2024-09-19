#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define pll             pair<ll, ll>
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
#define SB(x,n)        (x|=(1LL<< n))
#define CLRB(x,n)      (x&=~(1LL<<n))
#define CKB(x,n)       (x&(1LL<<n))
ll mod=1e9+7;
ll MOD=1e9+7;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

vector<ll> dijkstra(ll n,const vector<pll>adj[], ll src) 
{

    vector<ll>dist(n,LONG_LONG_MAX);
    priority_queue<pll> pq;
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty()) {
        ll u = pq.top().second;
        ll d_u = -pq.top().first; 
        pq.pop();

        if (d_u > dist[u]) continue;

        for (auto &edge : adj[u]) {
            ll v = edge.first;
            ll weight = edge.second;
            
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({-dist[v], v}); 
            }
        }
    }
    return dist;
}