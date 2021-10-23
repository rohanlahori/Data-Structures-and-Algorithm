#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vi vector<ll>
#define vp vector<pi>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define POB pop_back 
#define f(i,x,z) for(ll i=x;i<z;i++)
#define debug(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define clr(x) memset(x, 0, sizeof(x)) 
#define setall(x,a) memset(x, a, sizeof(x))
#define INF 1000000000000000003 
#define mathpi 3.141592653589793238 
#define F first;
#define S second;
#define vpair vector<pair<ll,ll>>
#define vpairs vector<pair<string,string>>
#define tin tuple<ll,ll,ll>
#define rev(i,x,z) for(ll i=x;i>=z;i--)  
#define ld long double 
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<"\n"; 
#define print_pair(v) for(auto x:v){cout<<x.first<<" "<<x.second<<" ";}cout<<"\n"; 
#define reverse(v) reverse(v.begin(),v.end()) 
#define nl "\n"
vi v;
void sieve(ll n)
{
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) 
    {
        if (is_prime[i] && (long long)i * i <= n) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    f(i,0,n)
    {
        if(is_prime[i]==1)
        {
            v.pb(i);
        }
    }
}
ll binaryexponention(ll a,ll b)
{
	ll result=1,md=1000000007;
	while(b>0)
	{
		if(b%2==1)
		{
			result*=a;
			result%=md;
		}
		a*=a;
		a%=md;
		b/=2;
	}
	return result;
}
int main()
{
    // freopen("inp.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ios::sync_with_stdio(0);// Input and output clearance
    cin.tie(0);
    // aim_icpc();
	ll t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        ll l=0,u=0,r=0,d=0;
        f(i,0,s.length())
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            else{
                d++;
            }
        }
        ll mn=min(l,r);
        ll mn1=min(u,d);
        string s1="";
         f(i,0,mn)
        {
            s1+='L';
        }
        f(i,0,mn1)
        {
            s1+='U';  
        }
        f(i,0,mn)
        {
            s1+='R';
        }
        f(i,0,mn1)
        {
            s1+='D';
        }
        if(mn1==0 && mn!=0)
        {
            cout<<2<<nl<<"LR"<<nl;
        }
        else if(mn==0 && mn1!=0)
        {
            cout<<2<<nl<<"UD"<<nl;
        }
        else{
            cout<<s1.length()<<nl<<s1<<nl;
        }
	}
}
//  think brutforce again
// make templates shortcut small
