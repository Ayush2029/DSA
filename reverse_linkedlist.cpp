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

// Defined class for node
class node{
public:
    int data;
    node* next;
};

// Initialise a new node
node* newnode(int data){
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;
    return temp;
};

// Code to reverse a linked list
int main() {
    node* a= newnode(5);
    node* b= newnode(6);
    node* c = newnode(7);
    node* d =newnode(8);
    node* e =newnode(9);
    node* f = newnode(10);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next =f;
    node* prev=NULL;
    node* cur = a;
    node *next = a->next;
    while(cur!=NULL){
        cur->next = prev;
        prev = cur;
        cur=next;
        if(cur!=NULL) next = cur->next;
    }
    node *head = prev;
    while(head!=NULL){
        cout<< head->data << " ";
        head = head->next;
    }
    return 0;
}
