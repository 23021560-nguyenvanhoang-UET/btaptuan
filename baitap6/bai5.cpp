
#include<bits/stdc++.h>

using namespace std;

bool nt(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        if(nt(i)){
            cout << i << " ";
        }
    }
}
