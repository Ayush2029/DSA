#include <iostream>
#include "bits/stdc++.h"
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORi(i, a, b) for (int i = (a); i <=(b); ++i)
#define s(a) sort(a.begin(),a.end())
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
ll f(ll n, vl &dp){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]= f(n-1,dp)+f(n-2,dp);
}
void solve() {
    ll n;
    cin>>n;
    vl dp(n+1,-1);
    cout<< f(n,dp);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll z=1;
    while(z--){
        solve();
    }
    return 0;
}
