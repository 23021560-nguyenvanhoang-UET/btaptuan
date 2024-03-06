#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        cout << "Nhap so nguyen: ";
        cin >> n;
        if(n == - 1){
            cout << "bye";
            break;
        }
        if(n >= 0 && n % 5 == 0){
            cout << n/5;
        }
        else{
            cout << "-1";
        }

        cout << endl;


    }


}

