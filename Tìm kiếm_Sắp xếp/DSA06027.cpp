#include <bits/stdc++.h>
using namespace std;

void sapxep(vector<int> a,int n){
    vector<string> buoc;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
        string tmp = "";
        for(int i=0;i<n;i++){
            tmp+= to_string(a[i]) + " ";
        }
        buoc.push_back(tmp);
    }
    for(int i = buoc.size() -1;i>=0;i--){
        cout << "Buoc " <<  i + 1 << ": " << buoc[i] <<'\n';
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
}