#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n-k+1;i++){
            ll maxx = 0;
            for(int j=i;j<i+k;j++){
                if(a[j] > maxx) maxx = a[j];
            }
            cout << maxx << " ";
        }
        cout << '\n';
    }
    return 0;
}