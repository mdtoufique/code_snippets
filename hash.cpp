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



const ll mod1 = 1e9 + 7;
const ll lim = 1e6 + 10;
const ll mod2 = 1e9 + 9;

int string_length, left_index, right_index, min_occurrences;

ll p1[lim], p2[lim], base1 = 1e9 + 21, base2 = 1e9 + 181;
ll h1[lim], h2[lim];
string input_string; // input_string is 1 based

/*calculate_power must be called*/

void calculate_power()
{
  p1[0] = p2[0] = 1;
  for (int i = 1; i < lim; i++)
  {
	p1[i] = (p1[i - 1] * base1) % mod1;
	p2[i] = (p2[i - 1] * base2) % mod2;
  }
}

class Hash
{
public:
  void calculate_hash(string &str)
  {
	h1[0] = h2[0] = 0;
	int str_length = str.length() - 1; // 1 based
	for (int i = 1; i <= str_length; i++)
	{
  	h1[i] = (h1[i - 1] * base1 + str[i]) % mod1;
  	h2[i] = (h2[i - 1] * base2 + str[i]) % mod2;
	}
  }
  ll get_hash_value(int left, int right)
  {
	ll hash1 = (h1[right] - h1[left - 1] * p1[right - left + 1]) % mod1;
	ll hash2 = (h2[right] - h2[left - 1] * p2[right - left + 1]) % mod2;
	if (hash1 < 0)
  	hash1 += mod1;
	if (hash2 < 0)
  	hash2 += mod2;
	return (hash1 << 32) | hash2;
  }
  ll hash_1(int left, int right)
  {
	ll hash1 = (h1[right] - h1[left - 1] * p1[right - left + 1]) % mod1;
	if (hash1 < 0)
  	hash1 += mod1;
	return hash1;
  }
  ll hash_2(int left, int right)
  {
	ll hash2 = (h2[right] - h2[left - 1] * p2[right - left + 1]) % mod2;
	if (hash2 < 0)
  	hash2 += mod2;
	return hash2;
  }
} hash_object;

bool isValidSubstring(ll mid)
{
  int count = 1;
  ll value = hash_object.get_hash_value(1, mid);
  //cout<<mid<< " "<<value;nn
  for (ll i = mid + 1; i <= string_length; i++)
  {
	if (i + mid - 1 > string_length)
  	break;
	ll sub_hash = hash_object.get_hash_value(i, i + mid - 1);
	if (sub_hash == value)
	{
  	count++;
  	i = i + mid - 1;
	}
  }
  return count >= min_occurrences;
}