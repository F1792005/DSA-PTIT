#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>  n;
        vector<int> a(n);
        vector<int> tt;
        map<int,int> cnt;
        set<int> check;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            cnt[a[i]]++;
            if(check.find(a[i])==check.end()){
                check.insert(a[i]);
                tt.push_back(a[i]);
            }
        }
        bool ok = false;
        for(auto it : tt){
            if(cnt[it] >= 2){
                cout << it << "\n";
                ok = true;
                break;
            }
        }
        if(!ok) cout <<"NO"<<'\n';
    }
    return 0;
}