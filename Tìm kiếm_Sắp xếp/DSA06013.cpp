#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> res(n);
        int cnt = 0;
        for(int i=0;i<n;i++){
            cin >> res[i];
            if(res[i]==k) cnt++;
        }
        if(cnt) cout << cnt <<'\n';
        else cout << "-1" <<'\n';
    }
    return 0;
}