#include <bits/stdc++.h>
using namespace std;
set<string> nameset;
vector<string> name;
int n,k;
int x[101];

void in(){
    for(int i=1;i<=k;i++){
        cout << name[x[i]-1] << " ";
    }
}

void Try(int i){
    for(int j = x[i-1]+1;j<=n-k+i;j++){
        x[i] = j;
        if(i == k){
            in();
            cout << '\n';
        }
        else Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m;
    cin >> m >> k;
    string s;
    for(int i=0;i<m;i++){
        cin >> s;
        nameset.insert(s);
    }
    n = nameset.size();
    name.assign(nameset.begin(),nameset.end());
    Try(1);
}