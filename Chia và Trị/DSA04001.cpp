#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        ll ans = 1;
        for(int i=1;i<=k;i++){
            ans = (ans*n) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}