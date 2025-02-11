#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> res;
        int L = INT_MAX, R=INT_MIN;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            res.insert(a[i]);
            if(a[i] < L) L = a[i];
            if(a[i] > R) R = a[i];
        }
        int soluong = R - L + 1;
        int co = res.size();
        int thieu = soluong - co;
        cout << thieu << '\n';
    }
    return 0;
}