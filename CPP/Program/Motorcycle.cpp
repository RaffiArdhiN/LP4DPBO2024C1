// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Motorcycle : public Vehicle {

private:
    string jenis_motor;
    double kapasitas_tangki;

public:
    Motorcycle(string plat_nomor, string merk, int tahun_produksi, string warna, string jenis_motor, double kapasitas_tangki)
        : Vehicle(plat_nomor, merk, tahun_produksi, warna), jenis_motor(jenis_motor), kapasitas_tangki(kapasitas_tangki) {}

    string getJenisMotor() const {
        return jenis_motor;
    }

    void setJenisMotor(const string& jenis_motor) {
        this->jenis_motor = jenis_motor;
    }

    double getKapasitasTangki() const {
        return kapasitas_tangki;
    }

    void setKapasitasTangki(double kapasitas_tangki) {
        this->kapasitas_tangki = kapasitas_tangki;
    }
    
    // Destructor
    ~Motorcycle()
    {


    }
};