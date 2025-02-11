#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n),b(m);
        set<int> res;
        map<int,int> cnt;
        for(int i=0;i<n;i++){
            cin >> a[i];
            res.insert(a[i]);
            cnt[a[i]]++;
        }
        for(int i =0;i<m;i++){
            cin >> b[i];
            res.insert(b[i]);
            cnt[b[i]]++;   
        }
        for(int it : res){
            for(int i =0;i<cnt[it];i++){
                cout << it << " ";
            }
        }
        cout << '\n';
    }
}