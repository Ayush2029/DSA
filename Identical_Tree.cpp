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
bool identical(node*root1,node*root2){
    if(root1==NULL && root2 == NULL)return true;
    if(root1==NULL || root2==NULL)return false;
    if(root1->data!=root2->data)return false;
    bool a1 = identical(root1->left,root2->left);
    bool a2 = identical(root1->right,root2->right);
    return a1&a2;
}
int main() {
    node* a = newnode(5);
    node* b = newnode(7);
    node* c = newnode(9);
    node* d = newnode(5);
    node* e = newnode(7);
    node* f = newnode(9);
    a->left = b;
    a->right = c;
    d->left = e;
    d->right = f;
    bool res = identical(a,d);
    if(res==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
