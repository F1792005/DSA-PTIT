#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> cnt;
        int maxx = 0;
        int keyy;
        for(int i=0;i<n;i++){
            cin >> a[i];
            cnt[a[i]]++;
            if(cnt[a[i]]>maxx){
                maxx = cnt[a[i]];
                keyy = a[i];
            } 
        }
        if(maxx > (n/2)) cout << keyy <<'\n';
        else cout <<"NO" <<'\n';
     }
}