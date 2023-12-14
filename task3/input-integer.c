#include <stdio.h>
int main(){
    int numberInput;

    // proses meminta inputan INTEGER dari user
    printf("===== PROGRAM INPUT INTEGER =====\n");
    printf("Masukkan sebuah angka(integer): ");
    scanf("%d", &numberInput);
    printf("Input integer: %d\n", numberInput);
    return 0;
}