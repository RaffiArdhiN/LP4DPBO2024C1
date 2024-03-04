// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <vector>
#include "ParkingLot.cpp" // Assuming ParkingLot class is defined in ParkingLot.h
#include "Vehicle.cpp"    // Assuming Vehicle class is defined in Vehicle.h

// Deklarasi namespace
using namespace std;

class Garage : public ParkingLot {
private:
    string nama_garasi;
    double luas_garasi;
    vector<Vehicle*> daftar_kendaraan;
public:
    Garage(string nama_garasi, double luas_garasi, int kapasitas, int jumlah_kendaraan_saat_ini) : ParkingLot(kapasitas, 0), nama_garasi(nama_garasi), luas_garasi(luas_garasi) {}

    string getNamaGarasi() {
        return nama_garasi;
    }

    void setNamaGarasi(string nama_garasi) {
        this->nama_garasi = nama_garasi;
    }

    double getLuasGarasi() const {
        return luas_garasi;
    }

    void setLuasGarasi(double luas_garasi) {
        this->luas_garasi = luas_garasi;
    }

    vector<Vehicle*>& getDaftarKendaraan() {
        return daftar_kendaraan;
    }

    void tambahKendaraan(Vehicle* vehicle) {
        if (daftar_kendaraan.size() < getKapasitas()) {
            daftar_kendaraan.push_back(vehicle); // Menggunakan pointer vehicle
            setJumlahKendaraanSaatIni(daftar_kendaraan.size());
            std::cout << "Kendaraan " << vehicle->getPlatNomor() << " berhasil ditambahkan ke dalam garasi." << std::endl;
        }
         else {
            std::cout << "Kapasitas garasi tidak mencukupi. Penambahan kendaraan ditolak." << std::endl;
        }
    }
    
    // Destructor
    ~Garage()
    {

    }
};