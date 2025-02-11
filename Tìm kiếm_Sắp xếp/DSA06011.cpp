#include <bits/stdc++.h>
using namespace std;

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
        int k = INT_MAX;
        for(int i = 0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int m = a[i] + a[j];
                if(abs(m) < abs(k)){
                    k = m;
                }
            }
        }
        cout << k << '\n';
    }
}