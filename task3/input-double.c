#include <stdio.h>
int main()
{
    double doubleInput;

    // proses meminta inputan DOUBLE dari user
    printf("===== PROGRAM INPUT DOUBLE =====\n");
    printf("Masukkan sebuah angka (double): ");
    scanf("%lf", &doubleInput);
    printf("Input double: %.2lf\n", doubleInput);
    return 0;
}