// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class ParkingLot {

private:
    int kapasitas;
    int jumlah_kendaraan_saat_ini;
    vector<Vehicle> daftar_kendaraan;

public:
    ParkingLot(int kapasitas, int jumlah_kendaraan_saat_ini) : kapasitas(kapasitas), jumlah_kendaraan_saat_ini(jumlah_kendaraan_saat_ini) {}

    int getKapasitas() {
        return kapasitas;
    }

    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    int getJumlahKendaraanSaatIni() {
        return jumlah_kendaraan_saat_ini;
    }

    void setJumlahKendaraanSaatIni(int jumlah_kendaraan_saat_ini) {
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    vector<Vehicle> getDaftarKendaraan() {
        return daftar_kendaraan;
    }

    void setDaftarKendaraan(vector<Vehicle> daftar_kendaraan) {
        this->daftar_kendaraan = daftar_kendaraan;
    }
    
    // Destructor
    ~ParkingLot()
    {


    }
};