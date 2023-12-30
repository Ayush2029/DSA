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
bool DFS(vvl&dp, ll i,ll j, vector<vector<bool>>&m, ll f, ll g){
    m[i][j]=true;
    if(i==f&&j==g)return true;
    bool ans=false;
    if(i>=1&&(dp[i-1][j]==1)&&!m[i-1][j]){
        ans|=DFS(dp,i-1,j,m,f,g);
    }
    if(j>=1&&(dp[i][j-1]==1)&&!m[i][j-1]){
        ans|=DFS(dp,i,j-1,m,f,g);
    }
    if(i>=1&&j>=1&&(dp[i-1][j-1]==1)&&!m[i-1][j-1]){
        ans|=DFS(dp,i-1,j-1,m,f,g);
    }
    if(i<4&&(dp[i+1][j]==1)&&!m[i+1][j]){
        ans|=DFS(dp,i+1,j,m,f,g);
    }
    if(j<4&&(dp[i][j+1]==1)&&!m[i][j+1]){
        ans|=DFS(dp,i,j+1,m,f,g);
    }
    if(i<4&&j<4&&(dp[i+1][j+1]==1)&&!m[i+1][j+1]){
        ans|=DFS(dp,i+1,j+1,m,f,g);
    }
    if(i>=1&&j<4&&(dp[i-1][j+1]==1)&&!m[i-1][j+1]){
        ans|=DFS(dp,i-1,j+1,m,f,g);
    }
    if(i<4&&j>=1&&(dp[i+1][j-1]==1)&&!m[i+1][j-1]){
        ans|=DFS(dp,i+1,j-1,m,f,g);
    }
    return ans;
}
void solve() {
    vvl dp={{1,1,1,1},{1,1,1,1},{1,1,1,1},{0,0,0,1}};
    vector<vector<bool>> m(4,vector<bool>(4,false));
    // Vertex of initial
    ll x,y;
    cin>>x>>y;
    //vertex of reached
    ll f,g;
    cin>>f>>g;
    cout<<DFS(dp,x,y,m,f,g);

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
