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
void DFS(vvl&dp, ll i,ll j, vector<vector<bool>>&m){
    m[i][j]=true;
    if(i>=1&&(dp[i-1][j]==1)&&!m[i-1][j]){
        DFS(dp,i-1,j,m);
    }
    if(j>=1&&(dp[i][j-1]==1)&&!m[i][j-1]){
        DFS(dp,i,j-1,m);
    }
    if(i>=1&&j>=1&&(dp[i-1][j-1]==1)&&!m[i-1][j-1]){
        DFS(dp,i-1,j-1,m);
    }
    if(i<4&&(dp[i+1][j]==1)&&!m[i+1][j]){
        DFS(dp,i+1,j,m);
    }
    if(j<4&&(dp[i][j+1]==1)&&!m[i][j+1]){
        DFS(dp,i,j+1,m);
    }
    if(i<4&&j<4&&(dp[i+1][j+1]==1)&&!m[i+1][j+1]){
        DFS(dp,i+1,j+1,m);
    }
    if(i>=1&&j<4&&(dp[i-1][j+1]==1)&&!m[i-1][j+1]){
        DFS(dp,i-1,j+1,m);
    }
    if(i<4&&j>=1&&(dp[i+1][j-1]==1)&&!m[i+1][j-1]){
        DFS(dp,i+1,j-1,m);
    }
}
void solve() {
    vvl dp={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{0,0,0,0,0},{1,0,1,1,0}};
    vector<vector<bool>> m(5,vector<bool>(5,false));
    ll sum=0;
    FOR(i,0,dp.size()){
        FOR(j,0,dp.size()){
            if(dp[i][j]!=0&&!m[i][j]) {
                DFS(dp,i,j,m);
                sum++;
            }
        }
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
