#include <bits/stdc++.h>
using namespace std;

auto solve(){
    string s = "NO SOLUTION";
    long long n , low = 1 , high , ans = 0;
    cin >> n;
    if( n==2 || n==3 ) {
        cout << s;
        return;
    }
    vector< long long > v( n , 0 );
    for(auto i = 0; i < n; i++) v[ i ] = i + 1;
    
    for(auto i = 1; i < n; i+=2 ) {
        cout << v[i] << " ";
    }
    for(auto i = 0; i < n; i+=2 ) {
        cout << v[i] << " ";
    }
    
}

int main() {
	solve();
}
