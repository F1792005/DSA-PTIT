#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll ans = 0;
        for(int i=0;i<n-2;i++){
            int l = i+1 , r = n-1; 
            while(l<r){
                ll sum = a[i]+a[l]+a[r];
                if(sum >= k){
                    r--;
                }
                else{
                    ans += (r-l);
                    l++;
                }
            }
        }
        cout << ans << '\n';
    }
}