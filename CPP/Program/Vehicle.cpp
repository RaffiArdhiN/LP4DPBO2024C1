// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

class Vehicle {
private:
    string plat_nomor;
    string merk;
    int tahun_produksi;
    string warna;
public:

    Vehicle(string plat_nomor, string merk, int tahun_produksi, string warna) : plat_nomor(plat_nomor), merk(merk), tahun_produksi(tahun_produksi), warna(warna) {

    }
    virtual ~Vehicle() {}

    string getPlatNomor()  {
        return plat_nomor;
    }

    void setPlatNomor(string plat_nomor) {
        this->plat_nomor = plat_nomor;
    }

    string getMerk() {
        return merk;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    int getTahunProduksi() {
        return tahun_produksi;
    }

    void setTahunProduksi(int tahun_produksi) {
        this->tahun_produksi = tahun_produksi;
    }

    string getWarna() {
        return warna;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }
    
    // Destructor
    // ~Vehicle()
    // {


    // }
};