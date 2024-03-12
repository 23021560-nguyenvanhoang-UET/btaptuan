#include<bits/stdc++.h>

using namespace std;
bool check(string s){
    int len = s.size();
    for(int i = 0 ; i < len/2; i++){
        if(s[i] != s[len - i - 1]){
            return false;
        }
    }
    return true;


}

int main(){
    string s;
    cin >> s;
    if(check(s)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
