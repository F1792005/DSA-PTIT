#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        int pos;
        bool ok = true;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==k && ok){
                pos = i;
                ok = false;
            }
        }
        cout << pos + 1 << '\n';
    }
    return 0;
}