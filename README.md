# tugas-pbo-akademik-0013
Tugas Praktik 1 PBO - Perancangan Kelas dan Objek.
# Tugas Praktik 1 PBO — Perancangan Kelas dan Objek

## 1. Identitas Mahasiswa

- **Nama:** Arla Berlianty
- **NIM:** 1003260013
- **Mata Kuliah:** Pemrograman Berorientasi Objek (PBO)
- **Bahasa Pemrograman:** C++
- **Nama Repository:** `tugas-pbo-akademik-0013`

---

## 2. Studi Kasus

Program ini mengangkat studi kasus pengelolaan data mahasiswa pada bagian akademik.

Dalam proses administrasi akademik, data mahasiswa seperti nama, Nomor Induk Mahasiswa (NIM), dan biaya kuliah perlu dikelola dengan baik. Data tersebut harus divalidasi agar tidak kosong atau memiliki nilai yang tidak sesuai.

Oleh karena itu, program ini dibuat untuk menyimpan data mahasiswa, mengubah data melalui metode yang telah disediakan, memvalidasi masukan, serta menghitung biaya kuliah setelah mendapatkan diskon.

Program juga memiliki kelas `PengelolaAkademik` untuk menyimpan dan menampilkan nama pengelola akademik.

### Permasalahan yang Diselesaikan

1. Bagaimana menyimpan data mahasiswa menggunakan class dan object?
2. Bagaimana melindungi atribut agar tidak dapat diubah secara langsung dari luar kelas?
3. Bagaimana memastikan nama dan NIM tidak kosong?
4. Bagaimana mencegah biaya kuliah bernilai negatif?
5. Bagaimana menangani data yang tidak valid menggunakan exception handling?
6. Bagaimana menghitung biaya kuliah setelah diskon?

### Solusi

Permasalahan tersebut diselesaikan dengan menerapkan konsep Pemrograman Berorientasi Objek (PBO) dalam C++, menggunakan dua kelas, yaitu `Mahasiswa0013` dan `PengelolaAkademik`.

---

## 3. Tujuan Program

Program ini bertujuan untuk:

- Menerapkan konsep class dan object dalam C++.
- Mengimplementasikan encapsulation menggunakan atribut `private`.
- Menggunakan constructor untuk menginisialisasi objek.
- Menggunakan getter dan setter untuk mengakses serta mengubah atribut.
- Menerapkan validasi data.
- Menangani kesalahan masukan menggunakan exception handling.
- Membuat metode perhitungan biaya kuliah setelah diskon.
- Menampilkan data dari beberapa objek dengan nilai atribut yang berbeda.

---

## 4. Ketentuan dan Aturan Program

Program menerapkan beberapa aturan berikut.

| Data | Aturan Validasi |
|---|---|
| Nama mahasiswa | Tidak boleh kosong |
| NIM mahasiswa | Tidak boleh kosong |
| Biaya kuliah | Tidak boleh negatif |
| Nama pengelola akademik | Tidak boleh kosong |
| Persentase diskon | Harus berada di antara 0% dan 100% |

Jika data yang dimasukkan tidak memenuhi aturan, program melempar exception bertipe `invalid_argument`.

Pada bagian `main()`, kesalahan saat menguji setter ditangani menggunakan `try-catch`. Dengan demikian, pesan kesalahan dapat ditampilkan dan program dapat melanjutkan eksekusi.

---

## 5. Kelas yang Digunakan

### A. Kelas `Mahasiswa0013`

Kelas ini merepresentasikan data seorang mahasiswa.

#### Atribut

| Atribut | Tipe Data | Keterangan |
|---|---|---|
| `nama` | `string` | Nama mahasiswa |
| `NIM` | `string` | Nomor Induk Mahasiswa |
| `biayaKuliah` | `double` | Biaya kuliah mahasiswa |

Seluruh atribut dibuat `private` agar tidak dapat diakses secara langsung dari luar kelas.

#### Constructor

Constructor menerima tiga parameter, yaitu nama, NIM, dan biaya kuliah. Nilai parameter digunakan untuk menginisialisasi atribut objek.

Constructor juga memvalidasi data awal. Jika nama atau NIM kosong, atau biaya kuliah negatif, constructor melempar `invalid_argument`.

#### Getter

- `getNama()` digunakan untuk membaca nama mahasiswa.
- `getNIM()` digunakan untuk membaca NIM mahasiswa.
- `getBiayaKuliah()` digunakan untuk membaca biaya kuliah.

#### Setter

- `setNama()` mengubah nama mahasiswa jika nama tidak kosong.
- `setNIM()` mengubah NIM jika NIM tidak kosong.
- `setBiayaKuliah()` mengubah biaya kuliah jika nilainya tidak negatif.

#### Method Tambahan

- `hitungBiayaSetelahDiskon()` menghitung biaya kuliah setelah diskon dengan persentase yang valid.
- `tampilkanData()` menampilkan nama, NIM, dan biaya kuliah mahasiswa.

### B. Kelas `PengelolaAkademik`

Kelas ini merepresentasikan pengelola akademik.

#### Atribut

| Atribut | Tipe Data | Keterangan |
|---|---|---|
| `nama` | `string` | Nama pengelola akademik |

Atribut `nama` dibuat `private`.

#### Constructor

Constructor menerima nama pengelola akademik dan memvalidasi agar nama tidak kosong.

#### Getter dan Setter

- `getNama()` digunakan untuk membaca nama pengelola.
- `setNama()` digunakan untuk mengubah nama pengelola jika nama tidak kosong.

#### Method Tambahan

- `tampilkan()` menampilkan nama pengelola akademik.

---

## 6. Konsep PBO yang Diterapkan

### 1. Class

Class merupakan cetak biru untuk membuat objek.

Pada program ini, class yang digunakan adalah `Mahasiswa0013` dan `PengelolaAkademik`.

### 2. Object

Object merupakan instance dari suatu class.

Program membuat dua objek mahasiswa:

- `m1` dengan nama Arla, NIM `1003260013`, dan biaya kuliah Rp32.000.
- `m2` dengan nama Keira, NIM `1003260023`, dan biaya kuliah Rp32.000.

Kedua objek mempunyai atribut masing-masing sehingga data yang disimpan dapat berbeda.

### 3. Encapsulation

Encapsulation diterapkan dengan menjadikan atribut sebagai `private`.

Tujuannya adalah membatasi akses langsung terhadap atribut. Perubahan data dilakukan melalui setter yang memiliki validasi.

### 4. Constructor

Constructor dijalankan secara otomatis ketika objek dibuat.

Constructor pada `Mahasiswa0013` menerima nama, NIM, dan biaya kuliah, kemudian menginisialisasi serta memvalidasi data tersebut.

### 5. Getter dan Setter

Getter digunakan untuk membaca nilai atribut, sedangkan setter digunakan untuk mengubahnya.

Setter memeriksa data sebelum melakukan perubahan agar aturan validasi tetap dipenuhi.

### 6. Validation

Validasi memastikan data yang diterima sesuai dengan aturan program.

Contohnya, nama tidak boleh kosong dan biaya kuliah tidak boleh negatif.

### 7. Exception Handling

Program menggunakan `throw` untuk melempar exception, `try` untuk menjalankan kode yang berpotensi menghasilkan exception, dan `catch` untuk menangani exception tersebut.

Metode `e.what()` digunakan untuk memperoleh pesan kesalahan.

### 8. Method

Method merupakan fungsi yang berada di dalam class.

Contoh method pada program ini adalah `tampilkanData()`, `hitungBiayaSetelahDiskon()`, dan `tampilkan()`.

---

## 7. Struktur Folder

```text
tugas-pbo-akademik-0013/
├── README.md
└── src/
    └── cpp/
        └── main.cpp
```

Keterangan:

- `README.md` berisi dokumentasi program.
- `main.cpp` berisi implementasi kelas, pembuatan objek, validasi, perhitungan, dan program utama.

---

## 8. Persyaratan Menjalankan Program

Untuk menjalankan program ini, diperlukan:

- Sistem operasi Windows.
- Visual Studio Code (VS Code).
- Compiler C++ seperti GCC melalui MinGW.
- Extension C/C++ untuk membantu penulisan dan pemeriksaan kode C++.
- Extension Code Runner jika program dijalankan menggunakan tombol Run Code.

## 9. Cara Menjalankan Program

Program dibuat menggunakan bahasa C++ dan dijalankan melalui Visual Studio Code.

Langkah-langkah menjalankan program:

1. Buka folder repository `tugas-pbo-akademik-0013` di VS Code.
2. Buka file `src/cpp/main.cpp`.
3. Pastikan compiler C++ sudah terpasang dan dapat digunakan.
4. Jalankan program menggunakan tombol Run yang tersedia pada VS Code sesuai extension yang digunakan.
5. Hasil program akan ditampilkan pada panel Output atau Terminal, bergantung pada pengaturan extension.

Program akan menampilkan hasil validasi data mahasiswa, data kedua objek mahasiswa, perhitungan biaya kuliah setelah diskon, dan nama pengelola akademik.

## 10. Contoh Output Program

```text
Validasi nama: Nama tidak boleh kosong
Validasi NIM: NIM tidak boleh kosong
Validasi biaya: Biaya kuliah tidak boleh negatif
=== MAHASISWA 1 ===
Nama: Arla
NIM: 1003260013
Biaya Kuliah: Rp32000

=== MAHASISWA 2 ===
Nama: Keira
NIM: 1003260023
Biaya Kuliah: Rp32000

Biaya m1 setelah diskon 10%: Rp28800
Pengelola: Admin Akademik Baru
```

---

## 11. Penjelasan Hasil Program

### A. Validasi Nama

Program mencoba mengubah nama mahasiswa menjadi string kosong.

Karena nama tidak boleh kosong, setter melempar exception dan menampilkan pesan:

`Validasi nama: Nama tidak boleh kosong`

Data nama sebelumnya tetap tersimpan karena perubahan hanya dilakukan setelah validasi berhasil.

### B. Validasi NIM

Program mencoba mengubah NIM menjadi string kosong.

Setter menolak perubahan tersebut dan menampilkan:

`Validasi NIM: NIM tidak boleh kosong`

### C. Validasi Biaya Kuliah

Program mencoba memasukkan biaya kuliah sebesar -1000.

Karena biaya kuliah tidak boleh negatif, setter menolak perubahan dan menampilkan:

`Validasi biaya: Biaya kuliah tidak boleh negatif`

### D. Menampilkan Data Mahasiswa

Program menampilkan data objek `m1` dan `m2`.

Objek `m1` menyimpan data Arla dengan NIM `1003260013`, sedangkan objek `m2` menyimpan data Keira dengan NIM `1003260023`.

Keduanya memiliki biaya kuliah Rp32.000.

### E. Menghitung Biaya Setelah Diskon

Program menghitung biaya kuliah objek `m1` setelah diskon 10%.

Perhitungannya:

Biaya setelah diskon = Biaya awal × (1 − Persentase diskon / 100)

Biaya setelah diskon = Rp32.000 × (1 − 10 / 100)

Biaya setelah diskon = Rp32.000 × 0,9

**Hasil: Rp28.800**

### F. Mengubah Nama Pengelola

Program mengubah nama pengelola dari `Admin Akademik` menjadi `Admin Akademik Baru` melalui setter.

Nama yang ditampilkan merupakan nilai terbaru setelah perubahan berhasil dilakukan.

---


## 12. Kesimpulan

Program pengelolaan data mahasiswa ini menerapkan konsep dasar Pemrograman Berorientasi Objek menggunakan C++.

Melalui dua kelas, yaitu `Mahasiswa0013` dan `PengelolaAkademik`, program menerapkan class, object, encapsulation, constructor, getter, setter, validasi data, exception handling, dan method.

Program juga menunjukkan bagaimana validasi dapat melindungi data dari perubahan yang tidak sesuai aturan serta bagaimana objek menyimpan data masing-masing secara terpisah.

Dengan demikian, program ini menjadi implementasi sederhana konsep perancangan kelas dan objek dalam pengelolaan data akademik.