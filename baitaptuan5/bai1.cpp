#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Hàm tính giá trị trung bình của dãy số
double calculateMean(const vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

// Hàm tính phương sai của dãy số
double calculateVariance(const vector<double>& numbers, double mean) {
    double sumSquaredDiff = 0.0;
    for (double num : numbers) {
        sumSquaredDiff += pow(num - mean, 2);
    }
    return sumSquaredDiff / numbers.size();
}

int main() {
    int n;
    cout << "Nhap so luong so trong day: ";
    cin >> n;

    vector<double> numbers(n);
    cout << "Nhap cac so trong day:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Tính giá trị trung bình của dãy số
    double mean = calculateMean(numbers);
    cout << "Gia tri trung binh (mean) cua day so la: " << mean << endl;

    // Tính phương sai của dãy số
    double variance = calculateVariance(numbers, mean);
    cout << "Phuong sai (variance) cua day so la: " << variance << endl;

    return 0;
}
