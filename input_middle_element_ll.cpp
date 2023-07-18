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
    int count=0;
    node*cur = head;
    while(cur!=NULL){
        cur = cur->next;
        count++;
    }
    int pos = count/2 + 1;
    int m=1;
    cur = head;
    while(m<pos){
        cur = cur->next;
        m++;
    }
    cout<< cur->data << endl;
    return 0;
}
