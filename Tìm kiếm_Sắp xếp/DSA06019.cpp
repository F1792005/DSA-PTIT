#include <bits/stdc++.h>
using namespace std;

bool sosanh(pair<int,int> a,pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> dem;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            dem[a[i]]++;
        }
        vector<pair<int,int>> mang(dem.begin(),dem.end());
        sort(mang.begin(),mang.end(),sosanh);
        for(auto it : mang){
            for(int i=0;i<it.second;i++){
                cout << it.first << " ";
            }
        }
        cout << '\n';
    }
}