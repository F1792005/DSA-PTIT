#include <bits/stdc++.h>
using namespace std;

void sapxepnoibot(int a[],int n){
    for(int i=0;i<n-1;i++){
        bool ok = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                ok = true;
                swap(a[j],a[j+1]);
            }
        }
        if(ok){
            cout << "Buoc " << i+1 <<": ";
            for(int i=0;i<n;i++){
                cout << a[i] << " ";
            }
            ok = false;
            cout << '\n';        
        }

    }
}

    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sapxepnoibot(a,n);
        return 0;
    }