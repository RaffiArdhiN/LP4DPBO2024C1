from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)

        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    def get_jenis_motor(self):
        return self.jenis_motor

    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki

    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki