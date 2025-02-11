#include <bits/stdc++.h>
using namespace std;
int n,a[101];
vector<vector<int>> ans;

void in(){
    for(int i=0;i<ans.size();i++){
        cout << "[";
        for(int j = 0;j< ans[i].size();j++){
            cout << ans[i][j] ;
            if(j!=ans[i].size()-1) cout <<" ";
        }
        cout << "]" << '\n';
    }
}
void Try(){
    for(int j=n-1;j>0;j--){
        vector<int> tmp;
        for(int i=0;i<j;i++){
            int k = a[i] + a[i+1];
            tmp.push_back(k); 
        }
        ans.push_back(tmp);
        for(int i = 0;i<j;i++){
            a[i] = tmp[i];
        }
    }
    in();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){

        cin >> n;
        ans.clear();
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> res(a,a+n);
        ans.push_back(res);
        Try();  
    }
}