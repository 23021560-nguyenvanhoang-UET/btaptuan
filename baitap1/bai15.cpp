#include<bits/stdc++.h>

using namespace std;
string FibonacciWord(int n){
    if(n == 0){
        return "a";
    }
    else if(n == 1){
        return "b";
    }
    else{
        string f0 = "a";
        string  f1 = "b";
        string fi;
        for(int i = 2; i <= n; i++){
            fi = f1 + f0;
            f0 = f1;
            f1 = fi;
        }
        return fi;

    }


}


int main(){
     for (int i = 0; i <= 10; ++i) {
        cout << "f(" << i << ") = " << FibonacciWord(i) << endl;
    }
    return 0;

}
