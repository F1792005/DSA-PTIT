#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        vector<ll> a(n);
        long long k = 1000000000;
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            ll m = abs(a[i]-a[i-1]);
            if(m < k) k = m;
        }
        cout << k << '\n';
    }
    return 0;
}