#include <bits/stdc++.h>
using namespace std;

void sapxep(vector<int> a,int n){
    vector<string> buoc;
    string buoc0 = "Buoc 0: " + to_string(a[0]);
    buoc.push_back(buoc0);
    for(int i = 1;i<n;i++){
        int x = a[i],pos = i-1;
        while(pos >=0 && x < a[pos]){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
        string tmp = "";
        tmp+= "Buoc " + to_string(i) + ": ";
        for(int k = 0;k<=i;k++){
            tmp += to_string(a[k]) + " ";
        }
        buoc.push_back(tmp);
    }
    for(int i = 0;i<n;i++){
        cout <<  buoc[i] << '\n';
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