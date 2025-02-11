#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            cin >> res[i];
        }
        sort(res.begin(),res.end());
        for(int it : res){
            cout << it << " ";
        }
        cout <<'\n';
    }
    return 0;
}