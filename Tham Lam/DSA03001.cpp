#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int MM;
        cin >> MM;
        vector<int> a = {1000,500,200,100,50,20,10,5,2,1};
        int cnt = 0;
        for(int s : a){
            if(MM >= s){
                int k = MM/s;
                cnt+=k;
                MM = MM - s*k;
            } 
        }
        cout << cnt << '\n';
    }
}