from Vehicle import Vehicle

class ParkingLot :
    def __init__(self, kapasitas, jumlah_kendaraan_saat_ini):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini
        self.daftar_kendaraan = []

    def get_kapasitas(self):
        return self.kapasitas

    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def get_jumlah_kendaraan_saat_ini(self):
        return self.jumlah_kendaraan_saat_ini

    def set_jumlah_kendaraan_saat_ini(self, jumlah_kendaraan_saat_ini):
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    def get_daftar_kendaraan(self):
        return self.daftar_kendaraan

    def set_daftar_kendaraan(self, daftar_kendaraan):
        self.daftar_kendaraan = daftar_kendaraan