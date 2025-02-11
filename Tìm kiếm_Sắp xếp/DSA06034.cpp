#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;ll k;
        cin >> n >> k;
        vector<ll> a(n);
        unordered_map<ll,ll> cnt;
        ll sl = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        for(int i=0;i<n;i++){
            ll nk = k - a[i];
            if(cnt.find(nk)!=cnt.end()) sl+=cnt[nk];
            if(nk == a[i]) sl--;
        }
        cout << sl/2 << '\n';
    }
    return 0;
}