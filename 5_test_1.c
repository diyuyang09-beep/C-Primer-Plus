/*
This C file contains the programming exercises from Chapter 5
*/
#include <stdio.h>

void hourToMin(void);
void printInt(void);
void dayToWeek(void);
void cmToFeet(void);
void addemup(void);
void addemupSq(void);
void culCube(void);
void printCube(double n);
void culMod(void);
void culTemp(void);
void printTemp(double tp);

int main(void)
{
    //Q1
    hourToMin();
    //Q2
    printInt();
    //Q3
    dayToWeek();
    //Q4
    cmToFeet();
    //Q5
    addemup();
    //Q6
    addemupSq();
    //Q7
    culCube();
    //Q8
    culMod();
    //Q9
    culTemp();

    return 0;
}

void hourToMin(void)
{
    const int HOUR_TO_MIN = 60;
    int chour, cmin;
    int min;

    printf("Enter the number of minutes (<= 0 to exit): ");
    scanf("%d", &min);
    while (min > 0) {
        chour = min / HOUR_TO_MIN;
        cmin = min % HOUR_TO_MIN;
        printf("%d minutes = %d hours, %d minutes\n",
                min, chour, cmin);
        
        printf("Enter the next value (<= 0 to exit): ");
        scanf("%d", &min);
    }
    printf("Program exit\n");
}

void printInt(void)
{
    int num, count;

    printf("Enter a integer: ");
    scanf("%d", &num);
    count = num + 10;
    while (num < count) {
        printf("%d ", num);
        num++;
    }
    printf("%d\n", count);
}

void dayToWeek(void)
{
    const int DAY_TO_WEEK = 7;
    int cday, cweek, day;

    printf("Enter the number of days (<= 0 to exit): ");
    scanf("%d", &day);
    while (day > 0) {
        cweek = day / DAY_TO_WEEK;
        cday = day % DAY_TO_WEEK;
        printf("%d days are %d weeks, %d days.\n",
                day, cweek, cday);
        
        printf("Enter the next value (<= 0 to exit): ");
        scanf("%d", &day);
    }
    printf("Program exit\n");
}

void cmToFeet(void)
{
    const float CM_TO_INCHE = 2.54;
    const int INCHE_TO_FEET = 12;
    float height, inche;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while (height > 0) {
        inche = height / CM_TO_INCHE;
        feet = (int)inche / INCHE_TO_FEET;
        inche = inche - feet * INCHE_TO_FEET;
        printf("%.1f cm = %d feet, %.1f inches\n",
                height, feet, inche);

        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%f", &height);
    }
    printf("Program exit\n");
}

void addemup(void)
{
    int days, sum, day;
    day = 0;
    sum = day;

    printf("Enter the number of days: ");
    scanf("%d", &days);
    while (++day < days + 1) {
        sum += day;
    }
    printf("SUM = %d\n", sum);
}

void addemupSq(void)
{
    int days, sum, day;
    day = 0;
    sum = day;

    printf("Enter the number of days: ");
    scanf("%d", &days);
    while (++day < days + 1) {
        sum += day * day;
    }
    printf("SUM = %d\n", sum);
}

void culCube(void)
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);
    printCube(num);
}
void printCube(double n)
{
    printf("N cubed: %.3f\n", n * n * n);
}

void culMod(void)
{
    int firstOp, secondOp;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &secondOp);
    printf("Now enter the first operand: ");
    scanf("%d", &firstOp);
    while (firstOp > 0) {
        printf("%d %% %d is %d\n", firstOp, secondOp, firstOp % secondOp);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &firstOp);
    }
    printf("Done\n");
}

void culTemp(void)
{
    double fah;
    int ret;

    printf("Enter the temperature in Fahrenheit: ");
    ret = scanf("%lf", &fah);
    while (ret == 1) {
        printTemp(fah);
        printf("\nEnter the next temperature in Fahrenheit ('q' or any non-number to quit): ");
        ret = scanf("%lf", &fah);
    }
    printf("Done\n");
}
void printTemp(double tp)
{
    const float arg1 = 5.0;
    const float arg2 = 9.0;
    const float arg3 = 32.0;
    const float arg4 = 273.16;
    double Cel, Kel;

    Cel = arg1 / arg2 * (tp - arg3);
    Kel = Cel + arg4;
    printf("Degrees Fahrenheit: %.2f\n", tp);
    printf("Degrees Celsius: %.2f\n", Cel);
    printf("Degrees Kelvin: %.2f\n", Kel);
}