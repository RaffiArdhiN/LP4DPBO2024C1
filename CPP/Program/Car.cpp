// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Car : public Vehicle {
private:
    int jumlah_kursi;
    int jumlah_pintu;

public:
    Car(string plat_nomor, string merk, int tahun_produksi, string warna, int jumlah_kursi, int jumlah_pintu)
        : Vehicle(plat_nomor, merk, tahun_produksi, warna), jumlah_kursi(jumlah_kursi), jumlah_pintu(jumlah_pintu) {}

    int getJumlahKursi() const {
        return jumlah_kursi;
    }

    void setJumlahKursi(int jumlah_kursi) {
        this->jumlah_kursi = jumlah_kursi;
    }

    int getJumlahPintu() const {
        return jumlah_pintu;
    }

    void setJumlahPintu(int jumlah_pintu) {
        this->jumlah_pintu = jumlah_pintu;
    }

    // Destructor
    ~Car()
    {


    }
};