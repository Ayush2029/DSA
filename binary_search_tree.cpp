#include <iostream>
#include "bits/stdc++.h"
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define All(i, a) FOR(i, 0, a)
#define FORi(i, a, b) for (int i = (a); i <=(b); ++i)
#define Alli(i, a) FORi(i, 0, a)
#define s(a) sort(a.begin(),a.end())
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using vi = vector<int>;
using vl = vector<long long>;
using mi = map<int,int>;
class node{
public:
    int data;
    node* left;
    node* right;
};
node* newnode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};
void depthTraversal(node* root){
    cout<< root->data << " ";
    if(root->left!=NULL)depthTraversal(root->left);
    if(root->right!=NULL)depthTraversal(root->right);
}
void solve(){
    vi a={3,2,5,1,4};
    node* root = NULL;
    node* curr = NULL;
    FOR(i,0,a.size()){
        if(i==0) {
            root = newnode(a[i]);
        } else {
            curr = root;
            while (1) {
                if (curr -> data > a[i]) {
                    if (curr -> left == NULL) {
                        curr -> left = newnode(a[i]);
                        break;
                    } else {
                        curr = curr -> left;
                    }
                } else {
                    if (curr -> right == NULL) {
                        curr -> right = newnode(a[i]);
                        break;
                    } else {
                        curr = curr->right;
                    }
                }
            }
        }
    }
    depthTraversal(root);
}
int main() {
    int N;
    cin>>N;
    while(N--){
        solve();
    }
    return 0;
}
