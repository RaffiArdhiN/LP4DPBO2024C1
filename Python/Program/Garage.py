from Vehicle import Vehicle
from ParkingLot import ParkingLot

class Garage(ParkingLot):
    def __init__(self, nama_garasi, luas_garasi, kapasitas, jumlah_kendaraan_saat_ini):
        super().__init__(kapasitas, 0)
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftar_kendaraan = []

    def get_nama_garasi(self):
        return self.nama_garasi

    def set_nama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi

    def get_luas_garasi(self):
        return self.luas_garasi

    def set_luas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi

    def get_daftar_kendaraan(self):
        return self.daftar_kendaraan

    def tambah_kendaraan(self, vehicle):
        if len(self.daftar_kendaraan) < self.get_kapasitas():
            self.daftar_kendaraan.append(vehicle)
            self.set_jumlah_kendaraan_saat_ini(len(self.daftar_kendaraan))
            print(f"Kendaraan {vehicle.get_plat_nomor()} berhasil ditambahkan ke dalam garasi.")
        else:
            print("Kapasitas garasi tidak mencukupi. Penambahan kendaraan ditolak.")
            
    def hapus_kendaraan(self, vehicle):
        self.daftar_kendaraan.remove(vehicle)
        self.set_jumlah_kendaraan_saat_ini(len(self.daftar_kendaraan))
        print(f"Kendaraan {vehicle.get_plat_nomor()} berhasil dihapus dari garasi.")