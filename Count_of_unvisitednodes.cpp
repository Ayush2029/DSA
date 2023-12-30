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
using mi = map<int,int>;
using ml = map<ll,ll>;
using mu = unordered_map<int,int>;
using mlu = unordered_map<ll,ll>;
using vvl = vector<vector<ll>>;
/*
 * author: ayushd2910
 */
vector<int> arr[100005];
vector<bool> visited(100005,false);
void DFS(ll node){
    visited[node]=true;
    FOR(i,0,arr[node].size()){
        if(!visited[arr[node][i]]){
            DFS(arr[node][i]);
        }
    }
}
void solve() {
    ll nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++) {
        ll x, y;
        cin >> x >> y;
        arr[x].pb(y);
        arr[y].pb(x);
    }
    ll p;
    cin>>p;
    DFS(p);
    ll sum=0;
    FORi(i,1,nodes){
        if(!visited[i])sum++;
    }
    cout<<sum<<endl;
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
