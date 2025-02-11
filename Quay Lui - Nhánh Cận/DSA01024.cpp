#include <bits/stdc++.h>
using namespace std;
vector<string> name;
int x[100],n,k;
void in(){
    for(int i=1;i<=k;i++){
        cout << name[x[i]-1] << " ";
    }
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i] = j;
        if(i==k){
            in();
            cout << '\n';
        }
        else{
            Try(i+1);
        }
    }
}


int main(){
    int m;
    set<string> nameset;
    string s;
    cin >> m >> k;
    for(int i=0;i<m;i++){
        cin >> s;
        nameset.insert(s);
    }
    name.assign(nameset.begin(),nameset.end());
    n = nameset.size();
    sort(name.begin(),name.end());
    Try(1);
}