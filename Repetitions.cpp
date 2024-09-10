#include <bits/stdc++.h>
using namespace std;

auto solve(){
    string s;
    cin >> s;
    long long cnt = 1 , maxi = 1;
    for(auto i = 1; i < s.size(); i++) {
        if( s[ i ] == s[ i - 1 ] ) cnt++;
        else cnt = 1;
        maxi = max( maxi , cnt);
    }
    cout << maxi;
}

int main() {
	solve();
}
