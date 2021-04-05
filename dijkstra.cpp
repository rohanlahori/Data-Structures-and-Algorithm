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
# define INF 10000000000000000
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
void dijkstra(vp v[],ll t)
{
	priority_queue<pi,vp,greater<pi>> p;//ascending order list(distance will be stored first then vertices)
	vll dist(t,INF);
	vll pat(t,-1);
	p.push(mp(0,0));
	dist[0]=0;
	while(!p.empty())
	{
		ll vert=p.top().S;
		p.pop();
		for(auto x : v[vert])
		{
			ll weight=x.S;
			ll point=x.F;
			if(dist[x.F]>dist[vert]+weight)
			{
				dist[x.F]=dist[vert]+weight;
				pat[x.F]=vert;
				p.push(mp(dist[x.F],x.F));
			}
		}
	}
	vll fin;
	if(pat[t-1]==-1)
	{
		cout<<"-1";
	}
	else
	{
		fin.pb(t);
		for(ll i=pat[t-1];i!=-1;i=pat[i])
		{
			fin.pb(i+1);
		}
		for(ll i=fin.size()-1;i>=0;i--)
		{
			cout<<fin[i]<<" ";
		}
	}
	
	
}

/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
//   freopen('a.txt', 'r', stdin); freopen('a_out.txt', 'w', stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t,n;
	cin>>t>>n;
	ll a,co=0,c=0,d=0,b=0,k;
	vp v[t];
	f(i,0,n)
	{
		cin>>a>>b>>c;
		v[a-1].pb(mp(b-1,c));
		v[b-1].pb(mp(a-1,c));
	}
	dijkstra(v,t);
   return 0;
}
