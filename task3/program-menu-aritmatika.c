#include <stdio.h>
int main()
{
    int menuPilihan;
    double angka1, angka2;

    // menampilkan menu untuk program yang akan dipilih
    printf("Pilih operasi matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Modulus\n");
    printf("Masukkan pilihan (1-5): ");

    // membaca input dari user
    scanf("%d", &menuPilihan);

    // meminta input angka dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%lf", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%lf", &angka2);

    // menjalankan operasi matematika sesuai pilihan
    switch (menuPilihan)
    {
    case 1:
        printf("%.2lf + %.2lf = %.2lf\n", angka1, angka2, angka1 + angka2);
        break;
    case 2:
        printf("%.2lf - %.2lf = %.2lf\n", angka1, angka2, angka1 - angka2);
        break;
    case 3:
        printf("%.2lf * %.2lf = %.2lf\n", angka1, angka2, angka1 * angka2);
        break;
    case 4:
        // Memeriksa apakah angka kedua tidak sama dengan 0 untuk menghindari pembagian oleh nol
        if (angka2 != 0)
        {
            printf("%.2lf / %.2lf = %.2lf\n", angka1, angka2, angka1 / angka2);
        }
        else
        {
            printf("Tidak bisa melakukan pembagian karena angka kedua adalah 0.\n");
        }
        break;
    case 5:
        // Memeriksa apakah angka kedua tidak sama dengan 0 untuk menghindari modulus oleh nol
        if (angka2 != 0)
        {
            printf("%.2lf %% %.2lf = %.2lf\n", angka1, angka2, fmod(angka1, angka2));
        }
        else
        {
            printf("Tidak bisa melakukan modulus karena angka kedua adalah 0.\n");
        }
        break;
    default:
        printf("Pilihan tidak valid.\n");
        break;
    }
    return 0;
}