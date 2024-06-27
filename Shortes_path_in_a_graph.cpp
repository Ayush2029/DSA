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
    vector<vector<pair<int,int>>> graph(10, vector<pair<int, int>>());
    graph[1]= {{2,3},{3,9},{8,10}};
    graph[2] = {{1,3},{4,2},{5,2},{6,2}};
    graph[3] = {{1,9},{7,1},{8,1}};
    graph[4]= {{2,2}};
    graph[5]= {{2,2}};
    graph[6]= {{2,2}};
    graph[7]= {{3,1}};
    graph[8]= {{3,1},{1,10}};
    int initial,final;
    cin>>initial>>final;
    vector<int> minvalue(10,INT_MAX);
    vector<bool> visited(10,false);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
    heap.push({0,initial});
    while(!heap.empty()){
        pair<int,int> top = heap.top();
        heap.pop();
        int node = top.second;
        int val = top.first;
        visited[node]=true;
        minvalue[node]=min(val,minvalue[node]);
        for(int i=0;i<graph[node].size();i++){
            if(!visited[graph[node][i].first]) {
                int head = graph[node][i].first;
                int weight = graph[node][i].second;
                heap.push({val+weight, head});
            }
        }
    }
    cout<<minvalue[final]<<endl;
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
