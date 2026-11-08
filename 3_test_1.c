#include <stdio.h>
#include <float.h>
#include <limits.h>

void flow(void);
void ASCII(void);
void printfloat(void);
void second(void);
void h2onum(void);
void height(void);

int main(void)
{
    // Q1
    flow();
    //Q2
    ASCII();
    //Q4
    printfloat();
    //Q5
    second();
    //Q6
    h2onum();
    //Q7
    height();

    return 0;
}

void flow(void)
{
    int num_1;
    float num_2, num_3;

    // integer overflow
    num_1 = INT_MAX;
    printf("Max int value: %d, overflow value: %d\n", num_1, num_1 + 1);

    // float underflow
    num_2 = FLT_MIN;
    printf("Float min value: %e\n", num_2);
    printf("Float underflow value: %e\n", num_2 / 2);

    // float overflow
    num_3 = FLT_MAX;
    printf("Float max value: %e\n", num_3);
    printf("Float overflow value: %e\n", num_3 * 2);
}

void ASCII(void)
{
    int chn;
    char ch;

    printf("\nEnter a ASCII number:____\b\b\b\b");
    scanf("%d", &chn);
    ch = chn;
    printf("Character: %c\n", ch);
}

void printfloat(void)
{
    float num;

    printf("\nEnter a floating-point value: ");
    scanf("%f", &num);
    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);
}

void second(void)
{
    int age;
    double second;

    printf("Enter your age: ");
    scanf("%d", &age);
    second = age * 3.156e7;
    printf("You've lived %e seconds\n", second);
}

void h2onum(void)
{
    double quarter;
    double num;

    printf("Enter number of quarter: ");
    scanf("%lf", &quarter);
    num = (quarter * 950.0) / 3e-23;
    printf("The number of H2O is %e\n", num);
}

void height(void)
{
    float inch_height, cm_height;

    printf("Enter your height(inch): ");
    scanf("%f", &inch_height);
    cm_height = inch_height * 2.54;
    printf("Your height is %f in cm\n", cm_height);
}