#include <iostream>
#include "bits/stdc++.h"
#define pb push_back
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define FORi(i, a, b) for (ll i = (a); i <=(b); ++i)
#define REV(i, a, b) for (ll i = (a); i > (b); --i)
#define REVi(i, a, b) for (ll i = (a); i >= (b); --i)
#define s(a) sort(a.begin(),a.end())
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using vi = vector<int>;
using vl = vector<long long>;
using vs = vector<string>;
using vc = vector<char>;
using mi = map<int,int>;
using ml = map<ll,ll>;
using mu = unordered_map<int,int>;
using mlu = unordered_map<ll,ll>;
using vvl = vector<vector<ll>>;
class Node{
    public:
    int data;
    Node* left,*right;
    explicit Node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
Node* insertIntoBST(Node* root, int val){
    if(root==nullptr){
        return new Node(val);
    }
    else if(val>root->data){
        root->right = insertIntoBST(root->right,val);
    }
    else{
        root->left = insertIntoBST(root->left,val);
    }
    return root;
}
void takeInput(Node* &root){
    int num,data;
    cin>>num;
    cin>>data;
    root = insertIntoBST(root,data);
    while(num>1){
        cin>>data;
        insertIntoBST(root,data);
        num--;
    }
}
bool search(Node* root,ll x){
    if(root==nullptr){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x)return search(root->left,x);
    else return search(root->right,x);
}
void solve() {
    Node* root = nullptr;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    ll x;
    cin>>x;
    cout << search(root,x);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll z=1;
    cin>>z;
    while(z--){
        solve();
    }
    return 0;
}
