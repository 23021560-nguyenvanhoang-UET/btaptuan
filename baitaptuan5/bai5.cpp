#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SinhVien {
public:
    string ten;
    float diem_toan;
    float diem_ly;
    float diem_anh;

    SinhVien(string ten, float diem_toan, float diem_ly, float diem_anh) {
        this->ten = ten;
        this->diem_toan = diem_toan;
        this->diem_ly = diem_ly;
        this->diem_anh = diem_anh;
    }

    float diem_trung_binh() {
        return (diem_toan + diem_ly + diem_anh) / 3.0;
    }
};

bool sap_xep_theo_toan(const SinhVien &a, const SinhVien &b) {
    return a.diem_toan > b.diem_toan;
}

bool sap_xep_theo_ly(const SinhVien &a, const SinhVien &b) {
    return a.diem_ly > b.diem_ly;
}

bool sap_xep_theo_trung_binh(const SinhVien &a, const SinhVien &b) {
    return a.diem_trung_binh() > b.diem_trung_binh();
}

void hien_thi_danh_sach(const vector<SinhVien> &sinh_viens) {
    cout << "Tên\tToán\tLý\tAnh" << endl;
    for (const SinhVien &sv : sinh_viens) {
        cout << sv.ten << "\t" << sv.diem_toan << "\t" << sv.diem_ly << "\t" << sv.diem_anh << endl;
    }
    cout << endl;
}

int main() {
    vector<SinhVien> danh_sach_sinh_vien;

    danh_sach_sinh_vien.push_back(SinhVien("Sinh Vien 1", 9.0, 6.0, 7.5));
    danh_sach_sinh_vien.push_back(SinhVien("Sinh Vien 2", 6.0, 7.0, 4.5));
    danh_sach_sinh_vien.push_back(SinhVien("Sinh Vien 3", 8.0, 8.5, 6.0));

    cout << "Theo điểm môn Toán:" << endl;
    sort(danh_sach_sinh_vien.begin(), danh_sach_sinh_vien.end(), sap_xep_theo_toan);
    hien_thi_danh_sach(danh_sach_sinh_vien);

    cout << "Theo điểm môn Lý:" << endl;
    sort(danh_sach_sinh_vien.begin(), danh_sach_sinh_vien.end(), sap_xep_theo_ly);
    hien_thi_danh_sach(danh_sach_sinh_vien);

    cout << "Theo điểm trung bình:" << endl;
    sort(danh_sach_sinh_vien.begin(), danh_sach_sinh_vien.end(), sap_xep_theo_trung_binh);
    cout << "Tên\tTB\tToán\tLý\tAnh" << endl;
    for (const SinhVien &sv : danh_sach_sinh_vien) {
        cout << sv.ten << "\t" << sv.diem_trung_binh() << "\t" << sv.diem_toan << "\t" << sv.diem_ly << "\t" << sv.diem_anh << endl;
    }

    return 0;
}
