#include <bits/stdc++.h>
using namespace std;

void sapxep(vector<int> a,int n){
    vector<string> buoc;
    for(int i=0;i<n-1;i++){
        int mi = i;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[mi]) mi = j;
        }
        swap(a[mi],a[i]);
        string tmp="";
        tmp+= "Buoc " + to_string(i+1) + ": ";
        for(int j=0;j<n;j++){
            tmp+= to_string(a[j]) +" ";
        }
        buoc.push_back(tmp);
    }
    for(int i=buoc.size()-1;i>=0;i--){
        cout << buoc[i] << '\n';
    }
}

int main(){
     int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sapxep(a,n);
}