#include <bits/stdc++.h>
using namespace std;
char c;int k;
char x[101];
void in(){
    for(int i=1;i<=k;i++){
        cout << x[i];
    }
}
void Try(int i){
    for(char j=x[i-1];j<=c;j++){
        x[i] = j;
        if(i==k){
            in();
            cout << endl;
        }
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c >> k;
    x[0] = 'A';
    Try(1);
}