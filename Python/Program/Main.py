# Saya Raffi Ardhi Naufal NIM 2202495 mengerjakan Latihan Praktikum 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from ParkingLot import ParkingLot
from Garage import Garage

# fungsi untuk menampilkan data kendaraan yang ada di garasi
def printList(garage):
    print(f"====================================")
    print(f"Nama Garasi: {garage.get_nama_garasi()}")
    print(f"Luas Garasi: {garage.get_luas_garasi()} m2")
    print(f"Kapasitas Garasi: {garage.get_kapasitas()} kendaraan")
    print(f"Jumlah Kendaraan Saat Ini: {garage.get_jumlah_kendaraan_saat_ini()} kendaraan")
    print("Daftar Kendaraan di Garasi:")
    for vehicle in garage.get_daftar_kendaraan():
        print(f"- Plat Nomor: {vehicle.get_plat_nomor()}, Merk: {vehicle.get_merk()}, Tahun Produksi: {vehicle.get_tahun_produksi()}, Warna: {vehicle.get_warna()}")
        if isinstance(vehicle, Car):
            print(f"   Jenis: Mobil, Jumlah Kursi: {vehicle.get_jumlah_kursi()}, Jumlah Pintu: {vehicle.get_jumlah_pintu()}")
        elif isinstance(vehicle, Motorcycle):
            print(f"   Jenis: Motor, Jenis Motor: {vehicle.get_jenis_motor()}, Kapasitas Tangki: {vehicle.get_kapasitas_tangki()}")
    print("\n")


def main():
    # buat deklarasi 4 objek kendaraan, 2 mobil dan motor
    car1 = Car("T097Y","Toyota","2022","Black","6","4")
    car2 = Car("U524P","Suzuki","2021","White","6","4")
    motorcycle1 = Motorcycle("S236O","Honda","2018","Black","Matic","3 liter")
    motorcycle2 = Motorcycle("K767F","Honda","2017","Black","Manual","5 liter")
    
    # buat objek garasi dengan kapasitas 5 kendaraan, lalu coba memasukkan objek mobil dan motor ke dalam garasi
    my_garage = Garage("Garasi Suka-Suka", 50.0, 5, 0)
    my_garage.tambah_kendaraan(car1)
    my_garage.tambah_kendaraan(car2)
    my_garage.tambah_kendaraan(motorcycle1)
    my_garage.tambah_kendaraan(motorcycle2)
    printList(my_garage)
    
    # coba menambah kendaraan ketika belum melebihi kapasitas
    car3 = Car("K864G","Wuling","2022","Red","8","6")
    my_garage.tambah_kendaraan(car3)
    printList(my_garage)
    
    # coba menambah kendaraan ketika melebihi kapasitas
    motorcycle3 = Motorcycle("J878G","Yamaha","2013","Black","Manual","6 liter")
    my_garage.tambah_kendaraan(motorcycle3)
    printList(my_garage)
    
    # coba menghapus kendaraan
    my_garage.hapus_kendaraan(motorcycle2)

if __name__ == "__main__":
    main()