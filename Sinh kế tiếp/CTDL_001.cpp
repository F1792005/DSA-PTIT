#include <bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok = true;
void ktao(){
    for(int i = 1;i<=n;i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = false;
    else{
        a[i] = 1 ;
    }
}

bool tn(){
    for(int i = 1 ;i<=n/2;i++){
        if(a[i]!=a[n-i+1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ktao();
    vector<string> tmp;
    while (ok) {
        if (tn()) {  // Kiểm tra đối xứng trước khi thêm vào danh sách
            string res = "";
            for (int i = 1; i <= n; i++) {
                res += a[i] + '0';  // Chuyển số thành ký tự
                if (i != n) res += " ";
            }
            tmp.push_back(res);
        }
        sinh();
    }
    for(string s : tmp){
        cout << s << "\n";
    }
}