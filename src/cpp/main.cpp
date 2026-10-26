#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


class Mahasiswa0013 {
private:
    string nama, NIM;
    double biayaKuliah; 

public:
    Mahasiswa0013(string nama, string NIM, double biaya)
        : nama(nama), NIM(NIM), biayaKuliah(biaya) {
        if (nama.empty() || NIM.empty() || biaya < 0) {
            throw invalid_argument("Data mahasiswa tidak valid");
        }
    }

    string getNama() const { return nama; }
    string getNIM() const { return NIM; }
    double getBiayaKuliah() const { return biayaKuliah; }

    void setNama(string newNama) {
        if (newNama.empty())
            throw invalid_argument("Nama tidak boleh kosong");
        nama = newNama;
    }

    void setNIM(string newNIM) {
        if (newNIM.empty())
            throw invalid_argument("NIM tidak boleh kosong");
        NIM = newNIM;
    }

    void setBiayaKuliah(double newBiaya) {
        if (newBiaya < 0)
            throw invalid_argument("Biaya kuliah tidak boleh negatif");
        biayaKuliah = newBiaya;
    }

    double hitungBiayaSetelahDiskon(double persen) const {
        if (persen < 0 || persen > 100)
            throw invalid_argument("Diskon harus antara 0 dan 100");
        return biayaKuliah * (1 - persen / 100);
    }

    void tampilkanData() const {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "Biaya Kuliah: Rp" << biayaKuliah << endl;
    }
};


class PengelolaAkademik {
private:
    std::string nama;

public:
    PengelolaAkademik(std::string nama) : nama(nama) {
        if (nama.empty())
            throw std::invalid_argument("Nama pengelola tidak boleh kosong");
    }

    std::string getNama() const { return nama; }

    void setNama(std::string baru) {
        if (baru.empty())
            throw std::invalid_argument("Nama pengelola tidak boleh kosong");
        nama = baru;
    }

    void tampilkan() const {
        std::cout << "Pengelola: " << nama << std::endl;
    }
};


int main() {
    Mahasiswa0013 m1("Arla", "1003260013", 32000);
    Mahasiswa0013 m2("Keira", "1003260023", 32000);

    PengelolaAkademik pengelola("Admin Akademik");

    /*m1.setNama("Arla berlianty");
    m1.setNIM("100320988");
    m1.setBiayaKuliah(40000);*/
    
    
        try {
            m1.setNama("");
        } catch (const invalid_argument& e) {
            cout << "Validasi nama: " << e.what() << endl;
        }

        try {
            m1.setNIM("");
        } catch (const invalid_argument& e) {
            cout << "Validasi NIM: " << e.what() << endl;
        }

        try {
            m1.setBiayaKuliah(-1000);
        } catch (const invalid_argument& e) {
            cout << "Validasi biaya: " << e.what() << endl;
        }
    

   /* pengelola.setNama("Admin Akademik Baru");*/

    cout << "=== MAHASISWA 1 ===" << endl;
    m1.tampilkanData();

    cout << "\n=== MAHASISWA 2 ===" << endl;
    m2.tampilkanData();

    cout << "\nBiaya m1 setelah diskon 10%: Rp"
         << m1.hitungBiayaSetelahDiskon(10) << endl;

    pengelola.tampilkan();

    return 0;
}

