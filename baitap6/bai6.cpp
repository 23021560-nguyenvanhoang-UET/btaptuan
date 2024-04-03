
#include<bits/stdc++.h>

using namespace std;

int UCLN(int a, int b){
    if(b == 0){
        return a;
    }
    return UCLN(b, a % b);
}
int main(){
    int a,b;
    cin >> a >> b;
    int gcd = UCLN(a,b);
    if(gcd == 1){
        cout << "a va b la hai so nguyen to cung nhau";
    }
    else{
        cout << "a va b khong phai hai so nguyen to cung nhau";
    }
}
