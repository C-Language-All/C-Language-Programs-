#include <stdio.h>

typedef struct complex_number {
    double real;
    double imag;
} complex;

int main() {
    complex c1, c2, c3;

    // Initialize complex numbers
    c1.real = 1;
    c1.imag = 2;

    c2.real = 3;
    c2.imag = 4;

    // Add two complex numbers
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    // Print the result
    printf("%.1f + %.1fi\n", c3.real, c3.imag);

    return 0;
}
