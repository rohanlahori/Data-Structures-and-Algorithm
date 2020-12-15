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
vector<ll> arr;
int binarySearch(  ll l, ll r, ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if(mid==arr.size()-1)
            return mid;
        if(arr[mid]<x && arr[mid+1]>x)
            return mid;


        if (arr[mid] > x) 
            return binarySearch( l, mid - 1, x); 
  
        return binarySearch( mid + 1, r, x); 
    } 
  
    return -1; 
} 
int main()
{
//   freopen('input.txt', 'r', stdin);
//   freopen('output.txt', 'w', stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n;
    cin>>t;
    f(i,0,t)
    {
       cin>>n;
       arr.pb(n);
    }
    srt(arr);
    ll a,b;
    cin>>a;
    f(i,0,a)
    {
        cin>>b;
        if(t==1)
        {
            if(b<arr[0])
            {
                cout<<"0\n";
            }
            else
            {
                cout<<"1\n";
            }
            
        }
        else
        {
             cout<<binarySearch(0, arr.size()-1, b)+1<<"\n";
        }
        
       
    }
   return 0;
}