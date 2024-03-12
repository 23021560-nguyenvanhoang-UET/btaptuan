#include<bits/stdc++.h>

using namespace std;
bool check(int n, int a[]){
    for(int i = 1; i <= n; i++){
        if(a[i] == n){
            return true;
        }
    }
    return false;

}

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    if(check(N, a)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}
