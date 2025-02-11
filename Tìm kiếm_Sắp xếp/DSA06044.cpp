#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> chan,le,res(n+1);
    int x;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(i%2==0) chan.push_back(x);
        else le.push_back(x);
    }
    sort(le.begin(),le.end());
    sort(chan.begin(),chan.end(),greater<int>());
    int ichan=0,ile=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            res[i] = chan[ichan];
            ichan++;
        }
        else{
            res[i] = le[ile];
            ile++;
        }
    }
    for(int i=1;i<=n;i++){
        cout << res[i] <<" ";
    }
}