#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            cin >> res[i];
        }
        sort(res.begin(),res.end(),greater<int>());
        for(int i=0;i<k;i++){
            cout << res[i] <<" ";
        }
        cout <<'\n';
    }
    return 0;
}