#include <bits/stdc++.h>
using namespace std;
int x[101],sum;
int n,k;
int a[101];
bool ok = false;
void Try(int i,int pos){
    for(int j = pos;j<=n;j++){
        x[i] = a[j];
        sum+=a[j];
        if(sum == k){
            ok = true;
            cout <<"[";
            for(int l=1;l<=i;l++){
                cout << x[l];
                if(l!=i) cout << " ";
            }
            cout << "] ";
        }
        else Try(i+1,j+1);
        sum-=a[j];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        sum = 0;
        ok = false;
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        Try(1,1);
        if(ok == false) cout <<"-1";
        cout << '\n';
    }
}