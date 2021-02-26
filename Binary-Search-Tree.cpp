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
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void insert(node* &head, int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    if(temp->data>val)
    {
        insert(temp->left,val);
    }
    else
    {
        insert(temp->right,val);
    }
    
    
}
void search(node* head,int val){
    node* temp=head;
    if(temp->data==val || temp==NULL)
    {
        cout<<temp->data<<"\n";
        return ;
    }
    
    if(temp->data>val)
    {
        search(temp->left,val);
    }
    else
    {
        search(temp->right,val);
    }
}
void delet(node* &head , int val)
{
    
    node* temp=head;
    cout<<temp->data<<" ";
    if(head==NULL)
    {
        cout<<"Value not found\n";
    }
    else if(temp->data>val)
    {
        delet(temp->left,val);
    }
    else if(temp->data<val)
    {
        delet(temp->right,val);
    }
    else
    {
        if(head->left==NULL && head->right==NULL)
        {
            temp=NULL;
        }
        else if(head->left!=NULL)
        {
            head=head->left;
        }
        else
        {
            head=head->right;
        }
        
        delete temp;
    }
    
}
int main()
{
//   freopen('input.txt', 'r', stdin);
//   freopen('output.txt', 'w', stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    node* head=NULL;
    insert(head,3);
    insert(head,1);
    insert(head,16);
    insert(head,5);
    //search(head,5);
    delet(head,5);
    search(head,5);
     
    //cout<<"\n"<<head->data;
   return 0;
}