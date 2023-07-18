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
    node* next;
};
node* newnode(int data){
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;
    return temp;
};

// Data input
int main() {
    int a;
    node *head, *curr = NULL;
    for (int i = 0; i <5; i++){
        cin>>a;
        node* temp = newnode(a);
        if (curr == NULL) {
            head = temp;
        }
        if (curr != NULL) curr->next = temp;
        curr = temp;
    }
    node* prev=NULL;
    node* cur = head;
    node *next = head->next;
    while(cur!=NULL){
        cur->next = prev;
        prev = cur;
        cur=next;
        if(cur!=NULL) next = cur->next;
    }
    curr = prev;
    while(curr!=NULL){
        cout<< curr->data << " ";
        curr = curr->next;
    }
    return 0;
}
