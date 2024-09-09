#include <bits/stdc++.h>
using namespace std;

auto solve(){
    long long n,ans=0;
    cin>>n;
    vector<long long>v(n);
    for(auto &it:v) cin>>it;
    for(long long i=1;i<n;i++){
        if(v[i-1]>v[i]) {
            long long diff = v[i-1] - v[i];
            ans = ans + diff;
            v[i] = v[i] + diff;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    solve();
}
