#include <bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok = true;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n - 1;
    while(i>=1 && a[i]>a[i+1]){
        --i;
    }
    if(i==0) ok = false;
    else{
        int j = n;
        while(a[i]>a[j]) --j;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = true;
        ktao();
        vector<string> res;
        while(ok){
            string tmp = "";
            for(int i=1;i<=n;i++){
                tmp +=a[i] + '0';
            }
            res.push_back(tmp);
            sinh();
        }
        int k = res.size();
        for(int i = k-1;i>=0;i--){
            cout << res[i] << " ";
        }
        cout <<'\n';
    }
    return 0;
}