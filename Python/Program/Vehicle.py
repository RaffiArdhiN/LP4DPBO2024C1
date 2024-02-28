class Vehicle:
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna
    
    def get_plat_nomor(self):
        return self.plat_nomor

    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def get_merk(self):
        return self.merk

    def set_merk(self, merk):
        self.merk = merk

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def get_warna(self):
        return self.warna

    def set_warna(self, warna):
        self.warna = warna
