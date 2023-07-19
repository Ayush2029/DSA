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
int MaxHeight(node* root){
    if(root==NULL)return 0;
    int left = MaxHeight(root->left);
    int right = MaxHeight(root->right);
    return max(left,right)+1;
}


int main() {
    node* a = newnode(5);
    node* b = newnode(7);
    node* c = newnode(9);
    node* d = newnode(10);
    node* e = newnode(11);
    node* f = newnode(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    int res = MaxHeight(a);
    cout<< res<<endl;
    return 0;
}
