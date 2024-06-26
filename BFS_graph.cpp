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
void solve() {
    vector<int> graph[10];
    graph[1].pb(2);
    graph[1].pb(3);
    graph[2].pb(4);
    graph[2].pb(5);
    graph[2].pb(6);
    graph[3].pb(7);
    graph[3].pb(8);
    queue<int> value;
    value.push(1);
    int level = 1;
    while(!value.empty()){
        int sz = value.size();
        for (int i = 0; i < sz; i++) {
            int a = value.front();
            cout << a << " ";
            value.pop();
            for(int j=0;j<graph[a].size();j++){
                value.push(graph[a][j]);
            }
        }
        cout << "\n";
    }
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
