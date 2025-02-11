#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
bool ok;
void sinh(){
    int i = n - 1;
    while(i>=1 && a[i] > a[i+1]){
        --i;
    }
    if(i==0) ok = false;
    else{
        int j = n;
        while(a[i]>a[j]) --j;
        swap(a[i],a[j]);
        reverse(a.begin()+i+1,a.end());
    }
}

int main(){
    ok = true;
    cin >> n ;
    a.resize(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a.begin()+1,a.begin()+n+1);
    while(ok){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout <<'\n';
        sinh();
    }
    return 0;
}