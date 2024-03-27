#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int sumeven = 0;
    int countodd = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] % 2 == 0){
            sumeven += a[i];
        }
        if(a[i] % 2 == 1){
            countodd++;
        }
    }
    cout << min << endl << max << endl << sumeven << endl << countodd;

}
