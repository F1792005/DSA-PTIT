#include <bits/stdc++.h>
using namespace std;
void sapxep(vector<int> a,int n){
    vector<string> buoc;
    for(int i=0;i<n-1;i++){
        bool ok = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j+1],a[j]);
                ok = true;
            }
        }
        if(ok){
            string tmp = "";
            tmp += "Buoc " + to_string(i+1) + ": ";
            for(int k=0;k<n;k++){
                tmp += to_string(a[k]) + " ";
            }
            buoc.push_back(tmp);
        }
    }
    for(int i=buoc.size()-1;i>=0;i--){
        cout << buoc[i] << '\n';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sapxep(a,n);
    }
    return 0;
}