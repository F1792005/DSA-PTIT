#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans += a[i]*i;
        }
        ans%=mod;
        cout << ans << '\n';
    }
    return 0;
}