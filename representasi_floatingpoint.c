#include <stdio.h>

union FloatUnion {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } parts;
};

void printBinary(unsigned int num, int size) {
    for (int i = size - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        unsigned int bit = (num & mask) >> i;
        printf("%u", bit);
    }
}

void representasiFloatingPoint(float num) {
    union FloatUnion u;
    u.f = num;

    printf("Representasi floating-point: ");
    printf("%u ", u.parts.sign);
    printBinary(u.parts.exponent, 8);
    printf(" ");
    printBinary(u.parts.mantissa, 23);
    printf("\n");
}

int main() {
    float num;

    printf("Masukkan angka floating-point: ");
    scanf("%f", &num);

    representasiFloatingPoint(num);

    return 0;
}
