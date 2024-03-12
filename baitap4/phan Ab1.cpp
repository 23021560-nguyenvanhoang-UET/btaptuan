#include<bits/stdc++.h>

using namespace std;
int a1[10];
//int a[];//Lỗi: Không thể khai báo mảng khi khôn chỉ định kích thước
// Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[N] = {1, 2, 3, 4} với N lớn hơn và nhỏ hơn 4
int arr2[6] = {1, 2, 3, 4};
//int arr2[3] = {1, 2, 3, 4}; // Lỗi: Kích thước mảng không phù hợp với số lượng phần tử được khởi tạo

// Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[ ] = {1, 2, 3, 4}
int arr3[] = {1, 2, 3, 4};
int main(){
    int a2[10];
    for(int i = 0; i < 10; i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << a2[i] << " ";

    }
    cout << endl;
    // In ra nội dung của mảng arr2
    cout << "arr2: ";
    for (int i = 0; i < 6; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // In ra nội dung của mảng arr3
    cout << "arr3: ";
    for (int i = 0; i < sizeof(arr3); ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;


}
