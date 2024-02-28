from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def get_jumlah_pintu(self):
        return self.jumlah_pintu

    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu