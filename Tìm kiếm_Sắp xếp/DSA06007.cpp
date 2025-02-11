#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        b = a;
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        while(a[l]==b[l]) l++;
        while(a[r]==b[r]) r--;
        cout << l+1 <<" " << r+1 <<'\n';
    }
    return 0;
}