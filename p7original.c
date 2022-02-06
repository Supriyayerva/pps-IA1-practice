#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);
complex input();
void output(complex n1, complex n2, complex result);

int main()
{
    complex n1, n2, result;
     n1=input();
     n2=input();
     result = add(n1, n2);
     output(n1,n2,result);
    return 0;
}

complex input()
{
    complex n1;
    printf("For a complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    return n1;
}

void output(complex n1, complex n2, complex result)
{
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
