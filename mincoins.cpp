#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//#pragma GCC optimize('O2') 
#define ll long long 
#define vll vector<ll>
#define vi vector<int>
#define tin tuple<ll,ll,ll>
#define mll map<ll,ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mt make_tuple
#define all(x) (x).begin(),(x).end()
#define rall(x) x.rbegin(), x.rend()
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define f(i,x,z) for(ll i=x;i<z;i++)
#define rf(i,x,z) for(ll i=x-1;i>=z;i--)
#define deb(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define clr(x) memset(x, 0, sizeof(x)) 
#define fa(i,vect) for(auto i : vect)
#define fr(i,vect) for(VI :: reverse_iterator i = vect.rbegin(); i != vect.rend(); i++)
#define mod 1000000007
//  for (auto &a : v)
//cin >> a;
//for (auto me : m) {
//std::vector<ll>::iterator it; 
//it = std::find (v.begin(), v.end(), ser);
//if (it != v.end())
# define INF 0x3f3f3f3f 
////////////////////////////////////////////////////////////////////////////////////////////

ll power(ll base,ll por)
{
ll res=1;
while(por>1){
if(por%2==1)
{
res*=base;
por--;
}
por/=2;
base*=base;
}
res*=base;
return res;
}
ll mincoins(ll coin[],ll m, ll v)
{
	ll table[v+1];
	table[0]=0;
	f(i,1,v+1)
	{
		table[i]=mod;
		f(j,0,m)
		{
			if(coin[j]<=i)
			{
				ll subres=table[i-coin[j]];
				if(subres!=mod && subres+1<table[i])
				{
					table[i]=subres+1;
				}
			}
		}
		
	}
		if(table[v]==mod)
		{
			return -1;
		}
		return table[v];
}

/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
//   freopen('a.txt', 'r', stdin); freopen('a_out.txt', 'w', stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t,n;
	cin>>t;
	ll aa[t];
	f(h,0,t)
	{
		cin>>aa[h];
	}
	cout<<mincoins(aa,t,4);
   return 0;
}