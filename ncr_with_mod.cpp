//    ǤØ β€¥ØŇĐ ƤŁỮŞ ỮŁŦŘΔ ΔŁŴΔ¥Ş ΔŇĐ ₣ØŘ€V€Ř 😈🤩🤟🤜👊🤛💪😉😇:

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <bitset>

#define ll long long
#define dd double
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define vs vector<string>
#define mll map<ll,ll>
#define mint map<int,int>
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define dups(a) a.erase(unique(all(a)), a.end())
#define B(a) a.begin()
#define E(a) a.end()
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Forr(i,a,b) for(ll i=a;i>=b;i--)
#define Itr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define F first
#define S second
#define tup3 tuple<ll,ll,ll>
#define tup(ind,a) get<ind>(a)
#define tern(x,y,z) ((x)?y:z)
#define M_P make_pair
#define P_B push_back
#define addt(x,y,z) P_B(make_tuple(x,y,z))
#define add(x,y) P_B(M_P(x,y))
#define sz(a) ((long long)(a).size())
#define till(n) fixed<<setprecision(n)
#define endd "\n"

const int mod = 1e9 + 7;
const ll INFL = LLONG_MAX;
const int INFI = INT_MAX;

using namespace std;

/////////////////////////////////////////////"SUIT YOURSELF"/////////////////////////////////////////////

template<class T> void cinn(T& x)
{
    cin >> x;
}

template<class H, class... T> void cinn(H& h, T&... t)
{
    cinn(h);
    cinn(t...);
}

template<class A> void cinn(vector<A>& x)
{
    for(auto& a : x)
        cinn(a);
}

// All mod functions

template<typename T> T getmod(T x, T m)
{
    T z = x % m;

    if(z >= 0) return z;
    return (z + m);
}

ll mod_add(ll a, ll b, ll m)
{
    a = getmod(a, m);
    b = getmod(b, m);
    return (((a + b) % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = getmod(a, m);
    b = getmod(b, m);
    return (((a * b) % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m)
{
    a = getmod(a, m);
    b = getmod(b, m);
    return (((a - b) % m) + m) % m;
}

// nCr function if n and r are small

ll NcR(ll n, ll r)
{
    if(r > n)
        return 0;

    ll p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            ll m = __gcd(p, k);

            p /= m;
            k /= m;

            n--;
            r--;

        }

    }

    else
        p = 1;

    return p;

}

///////////////////////////////////////////////"ASSEMBLE"////////////////////////////////////////////////

void Shazam()
{



}

//////////////////////////////////////////"WHATEVER IT TAKES"////////////////////////////////////////////

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;

    while(t--)
        Shazam();



    return 0;
}
