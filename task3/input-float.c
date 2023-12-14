#include <stdio.h>
int main()
{
    float floatInput;

    // proses meminta inputan FLOAT dari user
    printf("===== PROGRAM INPUT FLOAT =====\n");
    printf("Masukkan sebuah angka (float): ");
    scanf("%f", &floatInput);
    // hanya mengambil 2 angka di belakang koma
    printf("Input float: %.2f\n", floatInput);
    return 0;
}