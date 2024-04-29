#include <iostream>
#include <vector>
#include <string>

class BacSi {
private:
    std::string name;
    std::string specialize;
    int tuoi;

public:
    BacSi(std::string ten, std::string chuyenMon, int tuoi) : ten(ten), chuyenMon(chuyenMon), tuoi(tuoi) {}

    std::string getTen() const { return ten; }
    std::string getChuyenMon() const { return chuyenMon; }
    int getTuoi() const { return tuoi; }

    void hienThiThongTin() const {
        std::cout << "Ten: " << ten << ", Chuyen mon: " << chuyenMon << ", Tuoi: " << tuoi << std::endl;
    }
};

void timKiemBacSi(const std::vector<BacSi>& danhSach, const std::string& ten) {
    for (const auto& bacSi : danhSach) {
        if (bacSi.getTen() == ten) {
            bacSi.hienThiThongTin();
            return;
        }
    }
    std::cout << "No doctor information available: " << ten << std::endl;
}

int main() {
    std::vector<BacSi> danhSachBacSi;
    danhSachBacSi.emplace_back("Nguyen Van A", "heart", 45);
    danhSachBacSi.emplace_back("Tran Thi B", "brain", 38);

    std::string tenCanTim;
    std::cout << "Enter the name of the medical doctor: ";
    std::getline(std::cin, tenCanTim);

    timKiemBacSi(danhSachBacSi, tenCanTim);

    return 0;
}
