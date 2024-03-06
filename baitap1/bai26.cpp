#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin  >> N;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    double sum = 0;
    for(int i = 0; i < N; i++){
        if(a[i] > MAX){
            MAX = a[i];
        }
        if(a[i] < MIN){
            MIN = a[i];
        }
        sum += a[i];

    }
    double tb = sum/N;
    cout << "Mean: " << tb << endl;
    cout << "MAX: " << MAX << endl;
    cout << "MIN: " << MIN;

}
