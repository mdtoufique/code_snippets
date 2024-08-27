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


string toBinary(ll n)
{
	std::string r;
	while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
	return r;
}


ll binaryToDecimal(ll n)
{
	ll num = n;
	ll dec_value = 0;
 
	// Initializing base value to 1, i.e 2^0
	ll base = 1;
 
	ll temp = num;
	while (temp) {
    	int last_digit = temp % 10;
    	temp = temp / 10;
 
    	dec_value += last_digit * base;
 
    	base = base * 2;
	}
 
	return dec_value;
}


ll binaryToDecimal(string str)
{
	ll dec_num = 0;
  	ll power = 0 ;
	ll n = str.length() ;
   
  	for(int i = n-1 ; i>=0 ; i--){
  	if(str[i] == '1'){
    	dec_num += (1<<power) ;
  	}
  	power++ ;
	}
   
	return dec_num;
}