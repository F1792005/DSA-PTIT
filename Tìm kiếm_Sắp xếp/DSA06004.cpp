#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        set<int> A,B,giao,hop;
        int x;
        for(int i=0;i<m;i++){
            cin >> x;
            A.insert(x);
            hop.insert(x);
        }
        for(int i=0;i<n;i++){
            cin >> x;
            B.insert(x);
            hop.insert(x);
            if(A.find(x)!=A.end()) giao.insert(x);
        }
        for(int it : hop){
            cout <<it <<" ";
        }
        cout <<endl;
        for(int it :giao){
            cout <<it <<" ";
        }
        cout << endl;
    }
    return 0;
}