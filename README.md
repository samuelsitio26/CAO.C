# Representasi Bilangan

Ini adalah contoh program sederhana yang ditulis dalam bahasa C untuk merepresentasikan bilangan dalam berbagai sistem bilangan, seperti desimal, biner, oktal, dan heksadesimal.

## Cara Penggunaan

1. Pastikan Anda memiliki kompiler C yang terinstal di sistem Anda, seperti GCC atau Clang.
2. Unduh atau salin kode program dari file [representasi_bilangan.c](link_to_code_file) ke komputer Anda.
3. Buka terminal atau command prompt, lalu arahkan ke direktori di mana Anda menyimpan file program.
4. Compile program menggunakan perintah berikut:

   ```bash
   gcc representasi_bilangan.c -o representasi_bilangan
   representasi_bilangan

(Pastikan Anda mengganti "representasi_bilangan" dengan nama yang sesuai jika Anda ingin memberikan nama lain pada output program.)

Jalankan program dengan menjalankan perintah berikut:
./representasi_bilangan

Program akan meminta Anda untuk memasukkan bilangan desimal.
Setelah Anda memasukkan bilangan desimal, program akan mencetak representasi biner, oktal, dan heksadesimalnya.

```bash
Misalnya, jika Anda menjalankan program dengan memasukkan bilangan desimal 42, hasilnya akan menjadi:
Masukkan bilangan desimal: 42
Representasi biner: 101010
Representasi oktal: 52
Representasi heksadesimal: 2A
```

# Representasi Floating-Point
Ini adalah contoh program sederhana yang ditulis dalam bahasa C untuk merepresentasikan angka floating-point dalam COA (Computer Organization Architecture).

Buka terminal atau command prompt, lalu arahkan ke direktori di mana Anda menyimpan file program.

Compile program menggunakan perintah berikut:

   
   ```bash
   gcc representasi_floatingpoint.c -o representasi_floatingpoint
   representasi_floatingpoint
   ```


Setelah Anda memasukkan angka floating-point, program akan mencetak representasinya dalam bentuk bit, termasuk tanda (sign), eksponen (exponent), dan mantisa.

Contoh
Misalnya, jika Anda menjalankan program dengan memasukkan angka floating-point 3.14, hasilnya akan menjadi:

```bash
Masukkan angka floating-point: 3.14
Representasi floating-point: 0 10000000 10010001111010111000010
```
