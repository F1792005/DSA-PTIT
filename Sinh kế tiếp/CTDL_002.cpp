#include <bits/stdc++.h>
using namespace std;
int n,k,sum=0;
int x[101];
int a[101];
vector<string> ans;
void Try(int i,int pos){
    for(int j = pos;j<=n;j++){
        x[i] = a[j];
        sum+=a[j];
        if(sum == k){
            string tmp = "";
            for(int l=1;l<=i;l++){
                tmp += to_string(x[l]) +" ";
            }
            ans.push_back(tmp);
        }
        else{
            Try(i+1,j+1);
        }
        sum-=a[j];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n  >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Try(1,1);
    for(int z = ans.size()-1;z>=0;z--){
        cout <<ans[z]<<'\n';
    }
    cout << ans.size();
}