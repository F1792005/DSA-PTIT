#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        k = min(k,n-k);
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll mi=0,ma=0;
        for(int i=0;i<k;i++){
            mi+=a[i];
        }
        for(int i=k;i<n;i++){
            ma+=a[i];
        }
        cout << ma - mi << '\n';
    }
    return 0;
}