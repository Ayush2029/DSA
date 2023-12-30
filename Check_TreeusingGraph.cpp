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
void solve() {
    ll n,sum=0;
    cin>>n;
    vl a(n);
    FOR(i,0,n){
        cin>>a[i];//stores degree of each node
        sum+=a[i];
    }
    if(sum==2*(n-1)){       // sum of degree of each node equals 2*(nodes-1)
        cout<<"It's a Tree"<<endl;
    }
    else{
        cout<<"No, it's not a Tree"<<endl;
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
