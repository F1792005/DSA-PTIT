#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        bool ok = false;
        cin >> n >> k;
        vector<int> a(n);
        int pos;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(a[i] == k){
                ok = true;
                pos = i;
            }
        }
        if(ok) cout << pos + 1 << '\n';
        else cout <<"NO" << '\n';

    }
    return 0;
}