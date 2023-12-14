#include <stdio.h>
int main()
{
    // Input Output
    // variabel menyimpan input
    char stringInput[100]; // char ini menyimpan string hingga 99 karakter

    // proses meminta inputan STRING dari user
    printf("===== PROGRAM INPUT KALIMAT =====\n");
    printf("Masukkan sebuah kata atau kalimat: ");
    // Menggunakan fgets untuk membaca seluruh baris
    fgets(stringInput, sizeof(stringInput), stdin);
    // Membersihkan karakter newline (\n) yang ditangkap oleh fgets
    stringInput[strcspn(stringInput, "\n")] = '\0';
    printf("Input string: %s\n", stringInput);
    return 0;
}