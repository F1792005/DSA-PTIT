#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b;
        for(int i=0;i<n;i++){
            cin >> a[i];        
        }
        b = a;
        sort(b.begin(),b.end());
        bool ok = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && a[i]!=b[n-i-1]){
                cout << "No" << '\n';
                ok = false;
                break;
            }
        }
        if(ok) cout <<"Yes" << '\n';
    }
    return 0;
}