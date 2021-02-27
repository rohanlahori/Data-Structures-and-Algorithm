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
    //cout<<temp->data<<" ";
    if(head==NULL)
    {
        cout<<"Value not found\n";
    }
    else if(temp->data>val)
    {
       // cout<<temp->data<<" ";
        delet(temp->left,val);
    }
    else if(temp->data<val)
    {
        //cout<<temp->data<<" ";
        delet(temp->right,val);
    }
    else
    {

        if(head->left==NULL && head->right==NULL)
        {
            head=NULL;
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
void inorder(node* temp){
    if(temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void preorder(node* temp){
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node* temp){
    if(temp==NULL)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}
int totalNodes(node* &head){
    if(head==NULL){
        return 0;
    }
    else
    {
        return totalNodes(head->left)+totalNodes(head->right)+1;
    }
}
int totalInternalNodes(node* &head){
    if(head==NULL){
        return 0;
    }
    else if(head->left==NULL && head->right==NULL)
    {
        return 0;
    }
    else
    {
        return totalInternalNodes(head->left)+totalInternalNodes(head->right)+1;
    }
}
int totalExternalNodes(node* &head){
    if(head==NULL){
        return 0;
    }
    else if(head->left==NULL && head->right==NULL)
    {
        return 1;
    }
    else
    {
        return totalExternalNodes(head->left)+totalExternalNodes(head->right);
    }
}
int Height(node* &head){
    if(head==NULL){
        return 0;
    }
    else
    {
        int LeftHeight=Height(head->left);
        int RightHeight=Height(head->right);
        if(LeftHeight>RightHeight)
        {
            return LeftHeight+1;
        }
        else
        {
            return RightHeight+1;
        }
    }
}
void MirrorImage(node* &head){
    if(head!=NULL)
    {
        MirrorImage(head->left);
        MirrorImage(head->right);
        node* temp;
        temp=head->left;
        head->left=head->right;
        head->right=temp;
    }
}
int smallestelement(node* &head){
    if(head==NULL || head->left==NULL)
    {
        return head->data;
    }
    else
    {
        return smallestelement(head->left);
    }
    
}
int largestelement(node* &head){
    if(head==NULL || head->right==NULL)
    {
        return head->data;
    }
    else
    {
        return largestelement(head->right);
    }
    
}
void deletetree(node* head)
{
    if(head!=NULL)
    {
        deletetree(head->left);
        deletetree(head->right);
        delete head;
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
    inorder(head);
    cout<<"\n";
    postorder(head);
    cout<<"\n";
    preorder(head);
    cout<<"\n";
    delet(head,5);
    //search(head,5);
    cout<<"\n";
     inorder(head);
    cout<<"\n";
    cout<<"total numbers of nodes in Tree "<<totalNodes(head)<<"\n";
    cout<<"total numbers of Internal nodes in Tree "<<totalInternalNodes(head)<<"\n";
    cout<<"total numbers of External nodes in Tree "<<totalExternalNodes(head)<<"\n";
    cout<<"Height in Tree "<<Height(head)<<"\n";
    cout<<"Smallest element in tree is "<<smallestelement(head)<<"\n";
    cout<<"Largest element in tree is "<<largestelement(head)<<"\n";
    cout<<"After miroor image of the tree\n";
    MirrorImage(head);
    inorder(head);
    deletetree(head);
    cout<<"\n";
    //inorder(head);
    //cout<<"\n"<<head->data;
   return 0;
}
