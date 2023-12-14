#include <stdio.h>
int main(){
    // menyimpan sebuah integer
    int angka1 = 14;
    int angka2 = 8.3;
    int angka3 = 2.1;
    int angka4 = 5;
    printf("Nilai sebuah integer yaitu: %d\n\n", angka1); // %d\n digunakan untuk memberitahukan printf bahwa kita akan menyertakan nilai integer dari variabel angka ke dalam string yang akan dicetak.

    // menyimpan sebuah float
    float angkaFloat = 3.14;
    printf("Nilai sebuah float yaitu: %f\n\n", angkaFloat);

    // menyimpan sebuah double
    double angkaDouble = 2.6666;
    printf("Nilai sebuah double yaitu: %lf\n\n", angkaDouble);

    // menyimpan variabel char
    char karakter1 = 'A';
    char karakter2 = 'B';
    char karakter3 = 'C';
    printf("Saya memiliki 3 buah variabel yang memiliki tipe data character yaitu:\n");
    printf("karakter1: %c\n", karakter1);
    printf("karakter2: %c\n", karakter2);
    printf("karakter3: %c\n\n", karakter3);

    // menyimpan sebuah string
    char kata1[] = "Hello, World!";
    char kata2[] = "My name is LMAO";
    printf("Saya memiliki beberapa string yang sudah saya gabungkan menjadi sebuah kalimat: \n");
    printf("%s dan %s\n\n", kata1, kata2);

    // menyimpan boolean
    int benar = 1;
    int salah = 0;
    printf("Boolean (true): %d\n", benar);
    printf("Boolean (false): %d\n\n", salah);

    // menyimpan array integer
    int arrayAngka[5] = {10,20,30,40,50};
    printf("Saya memiliki sebuah array yang berisi angka angka integer, berikut adalah elemen-elemennya:\n");
    printf("Elemen ke-1: %d\n", arrayAngka[0]);
    printf("Elemen ke-2: %d\n", arrayAngka[1]);
    printf("Elemen ke-3: %d\n", arrayAngka[2]);
    printf("Elemen ke-4: %d\n", arrayAngka[3]);
    printf("Elemen ke-5: %d\n\n", arrayAngka[4]);

    // menyimpan array float
    float suhu[3] = {98.6, 37.0, 25.5};
    printf("Saya memiliki sebuah array yang berisi angka float,berikut saya mencoba mencari suhu pertama dari array\n");
    printf("Suhu pertama: %.2f\n\n", suhu[0]);

    // --- OPERASI MATEMATIKA SEDERHANA ---
    printf("Saya memiliki sebuah operasi menggunakan operator matematika sederhana, simak contohnya:\n");
    // penjumlahan biasa
    int hasilTambah = angka1 + angka2;
    printf("Penjumlahan: %d + %d = %d\n", angka1, angka2, hasilTambah);

    // pengurangan
    int hasilKurang = angka1 - angka2;
    printf("Pengurangan: %d - %d = %d\n", angka1, angka2, hasilKurang);

    // perkalian
    int hasilKali = angka2 * angka3;
    printf("Perkalian: %d * %d = %d\n", angka2, angka3, hasilKali);

    // pembagian
    int hasilBagi = angka1 / angka4;
    printf("Pembagian: %d / %d = %d\n", angka1, angka4, hasilBagi);

    // kalkulus = sisa hasil bagi
    int hasilModulus = angka1 % angka4;
    printf("Modulus: %d %% %d = %d\n", angka1, angka4, hasilModulus);

    return 0;
}