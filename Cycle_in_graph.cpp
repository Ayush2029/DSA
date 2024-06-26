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
bool DFS(vector<vector<int>>graph,vector<bool>visited,int a, int parent){
    visited[a]=true;
    bool ans = false;
    for(int i=0;i<graph[a].size();i++){
        if(!visited[graph[a][i]]){
            ans |= DFS(graph,visited,graph[a][i],a);
        }
        else{
            if(parent!=graph[a][i])ans=true;
        }
    }
    return ans;
}
void solve() {
    vector<vector<int>> graph(10, vector<int>());
    graph[1]= {2,3,8};
    graph[2] = {1,4,5,6};
    graph[3] = {1,7,8};
    graph[4]= {2};
    graph[5]= {2};
    graph[6]= {2};
    graph[7]= {3};
    graph[8]= {3,1};
    vector<bool> visited(10);
    int parent = -1;
    cout<< DFS(graph,visited,1,parent);
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
