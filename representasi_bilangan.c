#include <stdio.h>

void representasiBiner(int bilangan) {
    if (bilangan > 1) {
        representasiBiner(bilangan / 2);
    }
    printf("%d", bilangan % 2);
}

void representasiOktal(int bilangan) {
    if (bilangan > 7) {
        representasiOktal(bilangan / 8);
    }
    printf("%d", bilangan % 8);
}

void representasiHeksadesimal(int bilangan) {
    if (bilangan > 15) {
        representasiHeksadesimal(bilangan / 16);
    }
    int remainder = bilangan % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int bilangan;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &bilangan);

    printf("Representasi biner: ");
    representasiBiner(bilangan);
    printf("\n");

    printf("Representasi oktal: ");
    representasiOktal(bilangan);
    printf("\n");

    printf("Representasi heksadesimal: ");
    representasiHeksadesimal(bilangan);
    printf("\n");

    return 0;
}
