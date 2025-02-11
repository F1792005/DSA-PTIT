#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int n;
int a[101];
void in(){
    for(int i = ans.size()-1;i>=0;i--){
        cout << "[";
        for(int j = 0;j < ans[i].size();j++){
            cout << ans[i][j];
            if(j!=ans[i].size()-1) cout << " ";
        }
        cout << "] ";
    }
    cout << '\n';
}

void Try(){
    for(int j=n-1;j>0;j--){
        vector<int> tmp;
        for(int i = 0;i<j;i++){
            int x = a[i] + a[i+1];
            tmp.push_back(x);
        }
        ans.push_back(tmp);
        for(int i=0;i<j;i++){
            a[i] =  tmp[i];
        }
    }
    in();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ans.clear();
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> res(a,a+n);
        ans.push_back(res);
        Try();
    }
}