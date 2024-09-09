#include <bits/stdc++.h>
using namespace std;

auto solve(){
    long long n,ans=0,sum=0;
    cin>>n;
    vector<long long>v(n-1);
    for(auto &it:v) cin>>it;
    long long multiplication = n*(n+1)/2;
    for(long long i=0;i<v.size();i++) sum+=v[i];
    
    ans = multiplication - sum;
    cout<<ans<<"\n";
}

int main() {
    solve();
}
