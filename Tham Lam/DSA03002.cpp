#include <bits/stdc++.h>
using namespace std;
#define ll long long

 ll doicho(string a,char cu,char moi){
    ll it = 0;
    for(char c : a){
        if( c == cu) c = moi;
        it = it*10 + c - '0';
    }
    return it;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin >> a >> b;
    ll minn  = doicho(a,'6','5') + doicho(b,'6','5');
    ll maxx  = doicho(a,'5','6') + doicho(b,'5','6');
    cout << minn << " " << maxx;
}
