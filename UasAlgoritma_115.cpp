#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
void tampilkanSemuaMahasiswa() {
	cout << "========== SEMUA MAHASISWA ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Tidak ada data." << endl;
		return;
	}

	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM   : " << NIM[i] << endl;
		cout << "Nama  : " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		cout << endl;
	}
};
void algorithmacariMahasiswaByNIM() {
	int nim;
	cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data." << endl;
		return;
	}

	cout << "nim yang Dicari : ";
	cin >> nim;

	bool found = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (nim == nim) {
			cout << "Nim	: " << NIM[i] << endl;
			cout << "Nama	: " << nama[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
			cout << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Mahasiswa tidak di temukan" << endl;
	}
}

void algorithmaSortByTahunMasuk() {
	cout << "========== MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data." << endl;
		return;
	}

	for (int i = 0; i < jumlahMahasiswa - 1; i++) {
		for (int j = 0; j < jumlahMahasiswa - i - 1; j++) {
			if (tahunMasuk[j] > tahunMasuk[j + 1]) {
				swap(NIM[j], NIM[j + 1]);
				swap(nama[j], nama[j + 1]);
				swap(tahunMasuk[j], tahunMasuk[j + 1]);
			}
		}
	}


	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "Nim	: " << NIM[i] << endl;
		cout << "Nama	: " << nama[i] << endl;
		cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
		cout << endl;
	}

}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//2. algoritma tambah mahasiswa.
//	.algoritma short.

//3.stack : adalah struktur data yg berbentuk barisan dari satuan data.
//	queue : adalah kumpulan data yg penambahan element nya hanya bisa di ujung.

//4. di gunakan saat ingin menginplementasikan operasi life.

//5. 