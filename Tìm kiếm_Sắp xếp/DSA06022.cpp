#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> res;
        int x;
        for(int i=0;i<n;i++){
            cin >> x;
            res.insert(x);
        }
        if(res.size() <= 1) cout <<"-1";
        else{
            int dem=0;
            for(int it : res){
                cout << it <<" ";
                dem++;
                if(dem==2)  break;
            }
        }
        cout <<'\n';
    }
    return 0;
}