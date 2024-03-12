#include <iostream>
#include <cstring> // Để sử dụng hàm strlen()
#include <string>  // Để sử dụng lớp string

using namespace std;

// Khai báo mảng trong và ngoài hàm main() và không khởi tạo giá trị
char str1[10];
//char str1[]; // Lỗi: Không thể khai báo mảng mà không chỉ định kích thước

// Khai báo và khởi tạo trong và ngoài hàm main() dạng char a[N] = "abcd"; với N lớn hơn và nhỏ hơn 4, N bằng 4
char str2[5] = "abcd";
//char str2[3] = "abcd"; // Lỗi: Kích thước mảng không phù hợp với chuỗi ký tự

// Khai báo và khởi tạo trong và ngoài hàm main() dạng char a[ ] = "abcd";
char str3[] = "abcd";

int main() {
    // In ra nội dung của mảng str1
    cout << "str1 as array: ";
    for (int i = 0; i < sizeof(str1); ++i) {
        cout << str1[i];
    }
    cout << endl;
    cout << "str1 as string: " << str1 << endl;

    // In ra nội dung của mảng str2
    cout << "str2 as array: ";
    for (int i = 0; i < sizeof(str2); ++i) {
        cout << str2[i];
    }
    cout << endl;
    cout << "str2 as string: " << str2 << endl;

    // In ra nội dung của mảng str3
    cout << "str3 as array: ";
    for (int i = 0; i < sizeof(str3); ++i) {
        cout << str3[i];
    }
    cout << endl;
    cout << "str3 as string: " << str3 << endl;

    // Kích thước mảng str3 (bằng 5) là 1 lớn hơn kích thước của chuỗi ký tự "abcd" (bằng 4)
    cout << "Size of str3: " << sizeof(str3) << endl;
    // Độ dài thực sự của chuỗi str3
    cout << "Length of str3: " << strlen(str3) << endl;

    return 0;
}
