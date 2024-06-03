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
void inorder(Node *root){
    if(root==nullptr)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void solve() {
    Node* root = nullptr;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    // BST ka inorder is always a sorted array
    cout<<"Inorder Traversal"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Levelorder Traversal"<<endl;
    levelorder(root);
    cout<<endl;
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
