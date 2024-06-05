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
    Node* nxt;
};
// Creating new nodes.
Node* getNode(int data){
    Node* node = new Node();
    node->data=data;
    return node;
}

void solve() {
    // Create linked list.
    Node* head= getNode(1);
    Node* two = getNode(2);
    Node* three = getNode(3);
    Node* four = getNode(4);
    Node* five = getNode(5);
    Node* six = getNode(6);
    Node* seven = getNode(7);
    Node* eight = getNode(8);

    head->nxt=two;
    two->nxt=three;
    three->nxt=four;
    four->nxt = five;
    five->nxt=six;
    six->nxt=seven;
    seven->nxt = eight;

    // Copy of head.
    Node* copy = head;
    // Traversing a linked list
    while(copy!=NULL){
        cout<<copy->data<<" ";
        copy = copy->nxt;
    }
    cout<<endl;
    copy= head;
    while(copy!=NULL){
        cout<<copy->data<<" ";
        copy = copy->nxt;
    }
    cout<<endl;
    // Finding middle element of a linked list in O(2*n) Complexity.
    ll count=0;
    copy = head;
    while(copy!=NULL){
        count++;
        copy = copy->nxt;
    }
    count = (count%2==0)?(count/2)-1:(count/2);
    copy= head;
    while(count>0){
        copy = copy->nxt;
        count--;
    }
    cout<<copy->data<<endl;
    // Finding middle element of a linked list in single traversal.(Using 1-2 step jump pointer)
    Node* doublejump= head;
    Node* singlejump = head;
    while(doublejump->nxt!=NULL&&doublejump->nxt->nxt!=NULL){
        doublejump= doublejump->nxt->nxt;
        singlejump= singlejump->nxt;
    }
    cout<<singlejump->data;
    // Search x in a linked list and print index if found else print -1
    count=0;
    ll x;
    cin>>x;
    copy=head;
    bool ans=false;
    while(copy!=NULL){
        if(copy->data==x){
            cout<<count<<endl;
            ans=true;
            break;
        }
        copy = copy->nxt;
        count++;
    }
    if(!ans)cout<<-1<<endl;
    // find the first x and delete the node
    copy=head;
    cin>>x;
    Node* prev=NULL;
    while(copy!=NULL){
        if(copy->data==x){
            if(prev==NULL){
                head = copy->nxt;
            }
            else {
                prev->nxt = copy->nxt;
            }
            break;
        }
        prev = copy;
        copy = copy->nxt;
    }
    copy= head;
    while(copy!=NULL){
        cout<<copy->data<<" ";
        copy = copy->nxt;
    }
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
