//bai3
#include<bits/stdc++.h>


using namespace std;

int main(){
    char daytab[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};
char daytab1[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++){
        cout << static_cast<int>(daytab[i][j]) << " ";
    }
}
cout << endl;
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++){
        cout << static_cast<int>(daytab1[i][j]) << " ";
    }
}
}
//bai4
#include <iostream>

using namespace std;

int main() {
    // Khai báo mảng và biến
    char arr[5];
    char var1, var2;

    // Gán giá trị cho mảng và biến
    for (int i = 0; i < 5; ++i) {
        arr[i] = 'A' + i;
    }
    var1 = 'X';
    var2 = 'Y';

    // Đọc tràn mảng và in ra giá trị
    cout << "Read overflow:" << endl;
    cout << "arr[-1] = " << arr[-1] << endl;
    cout << "arr[5] = " << arr[5] << endl;
    cout << "arr[6] = " << arr[6] << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    cout << endl;

    // Ghi tràn mảng và in ra giá trị của biến
    cout << "Write overflow:" << endl;
    arr[-1] = 'Z';
    arr[5] = 'W';
    arr[6] = 'V';

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    cout << endl;

    // Tràn mảng nhiều chiều
    char arr2D[3][4];

    // Gán giá trị cho mảng 2 chiều
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr2D[i][j] = 'A' + i * 4 + j;
        }
    }

    // Ghi tràn dòng đầu tiên của mảng 2 chiều
    cout << "Write overflow for 2D array:" << endl;
    for (int j = 0; j < 6; ++j) {
        arr2D[0][j] = 'Z';
    }

    // In ra mảng 2 chiều
    cout << "2D Array after overflow:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//bai5
#include <iostream>

using namespace std;

int main() {
    const int N = 10; // Kích thước của chuỗi
    char str[N];

    cout << "Nhap chuoi (khong chua ki tu trang): ";
    cin >> str;

    cout << "Chuoi da nhap: ";
    cout << "_" << str << "_"; // Chặn đuôi bằng một kí tự đặc biệt để nhìn thấy cuối chuỗi

    return 0;
}
//bai6
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Hàm sinh số ngẫu nhiên trong khoảng từ min đến max
int randomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Hàm sắp xếp nổi bọt
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi giá trị
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int N = 30;
    int arr[N];

    // Khởi tạo hạt giống cho hàm sinh số ngẫu nhiên
    srand(time(NULL));

    // Sinh và in mảng ngẫu nhiên
    cout << "Mang ban dau: ";
    for (int i = 0; i < N; ++i) {
        arr[i] = randomNumber(1, 100);
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sắp xếp mảng bằng thuật toán nổi bọt
    bubbleSort(arr, N);

    // In mảng sau khi sắp xếp
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




