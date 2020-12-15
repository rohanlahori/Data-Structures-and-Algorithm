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
const int N = 100000;  
  
int n;
  

int tree[2 * N]; 

void build( int arr[])  
{  
 
    for (int i=0; i<n; i++)     
        tree[n+i] = arr[i]; 

    for (int i = n - 1; i > 0; --i)      
        tree[i] = tree[i<<1] + tree[i<<1 | 1];     
} 

void updateTreeNode(int p, int value)  
{  

    tree[p+n] = value; 
    p = p+n; 

    for (int i=p; i > 1; i >>= 1) 
        tree[i>>1] = tree[i] + tree[i^1]; 
} 

int query(int l, int r)  
{  
    int res = 0; 
      
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
    { 
        if (l&1)  
            res += tree[l++]; 
      
        if (r&1)  
            res += tree[--r]; 
    } 
      
    return res; 
} 
int main()
{
//   freopen('input.txt', 'r', stdin);
//   freopen('output.txt', 'w', stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>n;
	int aa[n];
	f(i,0,n)
	{
		cin>>aa[i];
	}
	build(aa);

	cout << query(1, 4)<<endl; 
      
    updateTreeNode(2, 1); 
      
 
    cout << query(1, 3)<<endl; 
   return 0;
}