    #include <bits/stdc++.h>
    using namespace std;

    void sapxepchon(int a[],int n){
        for(int i=0;i<n-1;i++){
            int minn = i;
            for(int j = i+1;j<n;j++){
                if(a[j]<a[minn]){
                    minn = j;
                }
            }
            swap(a[i],a[minn]);
            cout << "Buoc " << i+1 <<": ";
            for(int i=0;i<n;i++){
                cout << a[i] << " ";
            }
            cout << '\n';
        }
    }

    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sapxepchon(a,n);
        return 0;
    }