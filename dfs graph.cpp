#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vl vector<ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rall(x) x.rbegin(), x.rend()
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define f(i,x,z) for(ll i=x;i<z;i++)
#define deb(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define clr(x) memset(x, 0, sizeof(x)) 
#define mll map<ll,ll>
#define mod 1000000007
//  for (auto &a : v)
//cin >> a;
//for (auto me : m) {
//std::vector<ll>::iterator it; 
//it = std::find (v.begin(), v.end(), ser);
//if (it != v.end())
vector< vector <int>> g;
vector<bool> v;
int pre=0,co=0,co1=0;
void addEdge(int a, int b)
{
	g[a].push_back(b);
	g[b].push_back(a);
}

void dfsVisit(int u)
{
	v[u] = true;
	cout << u << " ";
	for(auto i = g[u].begin(); i != g[u].end(); i++)
	{
		if(!v[*i])
			dfsVisit(*i);
	}
}

void dfs(int n)
{
	for(int u = 0; u < n; u++)
	{
		if(!v[u])
			dfsVisit(u);
	}
}

int main()
{
	int n, e;
	cin >> n >> e;

	v.assign(n, false);
	g.assign(n, vector<int>());
	vector<int> v1(n);
	int a, b;
	for(int i = 0; i < n-1; i++)
	{
		cin >> a >> b;
		addEdge(a, b);
	}
	dfs(n);
	
}