/* Saya Raffi Ardhi Naufal NIM 2202495 mengerjakan Latihan Praktikum 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <vector>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Garage.cpp"
using namespace std;

// fungsi menampilkan isi garasi
void printList(Garage garage) {
    cout << "====================================" << endl;
    cout << "Nama Garasi: " << garage.getNamaGarasi() << endl;
    cout << "Luas Garasi: " << garage.getLuasGarasi() << " m2" << endl;
    cout << "Kapasitas Garasi: " << garage.getKapasitas() << " kendaraan" << endl;
    cout << "Jumlah Kendaraan Saat Ini: " << garage.getJumlahKendaraanSaatIni() << " kendaraan" << endl;
    cout << "Daftar Kendaraan di Garasi:" << endl;
    
    for (Vehicle* vehicle : garage.getDaftarKendaraan()) {
        cout << "- Plat Nomor: " << vehicle->getPlatNomor() << ", Merk: " << vehicle->getMerk()
             << ", Tahun Produksi: " << vehicle->getTahunProduksi() << ", Warna: " << vehicle->getWarna() << endl;

        if (Car* car = dynamic_cast<Car*>(vehicle)) {
            cout << "   Jenis: Mobil, Jumlah Kursi: " << car->getJumlahKursi() << ", Jumlah Pintu: " << car->getJumlahPintu() << std::endl;
        } 
        else {
            Motorcycle* motorcycle = dynamic_cast<Motorcycle*>(vehicle);
            cout << "   Jenis: Motor, Jenis Motor: " << motorcycle->getJenisMotor() << ", Kapasitas Tangki: " << motorcycle->getKapasitasTangki() << endl;
        }
    }
    cout << endl;
}

int main() {
    // deklarasi 4 kendaraan, 2 mobil and 2 motor
    Car car1("T097Y", "Toyota", 2022, "Black", 6, 4);
    Car car2("U524P", "Suzuki", 2021, "White", 6, 4);
    Motorcycle motorcycle1("S236O", "Honda", 2018, "Black", "Matic", 3.0);
    Motorcycle motorcycle2("K767F", "Honda", 2017, "Black", "Manual", 5.0);

    // membuat objek garasi dengan kapasitas 5 kendaraan, lalu mencoba memasukkan kendaraan-kendaraan tadi ke dalam garasi ini
    Garage myGarage("Garasi Suka-Suka", 50.0, 5, 0);
    myGarage.tambahKendaraan(&car1);
    myGarage.tambahKendaraan(&car2);
    myGarage.tambahKendaraan(&motorcycle1);
    myGarage.tambahKendaraan(&motorcycle2);
    printList(myGarage);

    // coba menambahkan kendaraan ketika kapasitas belum penuh
    Car car3("K864G", "Wuling", 2022, "Red", 8, 6);
    myGarage.tambahKendaraan(&car3);
    printList(myGarage);

    // coba menambahkan kendaraan ketika kapasitas penuh
    Motorcycle motorcycle3("J878G", "Yamaha", 2013, "Black", "Manual", 6.0);
    myGarage.tambahKendaraan(&motorcycle3);
    printList(myGarage);

    return 0;
}
