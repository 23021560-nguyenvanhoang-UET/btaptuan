#include<bits/stdc++.h>

using namespace std;
bool LeapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    else{
        return false;
    }


}

int main(){
    int year;
    cin >> year;
    if(LeapYear(year)){
        cout << "true";
    }
    else{
        cout << "false";
    }



}
