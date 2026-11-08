#include <stdio.h>
#include <string.h>
#include <float.h>

void name(void);
void printName(void);
void printFloat(void);
void height(void);
void downloadSpeed(void);
void printNameLen(void);
void culFloatVal(void);
void culMileperGallon(void);

int main(void)
{
    //Q1
    name();
    //Q2
    printName();
    //Q3
    printFloat();
    //Q4
    height();
    //Q5
    downloadSpeed();
    //Q6
    printNameLen();
    //Q7
    culFloatVal();
    //Q8
    culMileperGallon();

    return 0;
}

void name(void)
{
    char firstName[10];
    char lastName[10];

    printf("Enter your name: ");
    scanf("%s", firstName);
    scanf("%s", lastName);

    printf("%s,%s\n", firstName, lastName);
}

void printName(void)
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", (int)strlen(name) + 3, name);
}

void printFloat(void)
{
    float num;

    printf("Enter a float number: ");
    scanf("%f", &num);

    printf("The input is %0.1f or %0.1e\n", num, num);
    printf("The input is +%0.3f or %0.3e\n", num, num);
}

void height(void)
{
    char name[20];
    float height;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height(cm): ");
    scanf("%f", &height);

    printf("%s, you are %0.3f(m) feet tall\n", name, height/100.0);
}

void downloadSpeed(void)
{
    float size, speed;

    printf("Enter download speed(Mb/s): ");
    scanf("%f", &speed);
    printf("Enter file size(MB): ");
    scanf("%f", &size);

    printf("At %.2f magabits per second, a file of %.2f megabytes"
    " downloads in %.2f seconds.\n", speed, size, size / (speed / 8));
}

void printNameLen(void)
{
    char firstname[10];
    char secondname[10];

    printf("Enter your first name: ");
    scanf("%s", firstname);
    printf("Enter your second name: ");
    scanf("%s", secondname);

    printf("%s %s\n", firstname, secondname);
    printf("%*zu %*zu\n", (int)strlen(firstname), strlen(firstname),
            (int)strlen(secondname), strlen(secondname));
    
    printf("%s %s\n", firstname, secondname);
    printf("%-*zu %-*zu\n", (int)strlen(firstname), strlen(firstname),
            (int)strlen(secondname), strlen(secondname));
}

void culFloatVal(void)
{
    float fl = 1.0 / 3.0;
    double du = 1.0 / 3.0;

    printf("float: %.6f, %.12f, %.16f\n", fl, fl, fl);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("double: %.6f, %.12f, %.16f\n", du, du, du);
    printf("DBL_DIG: %d\n", DBL_DIG);
}

void culMileperGallon(void)
{
    const float galToLitre = 3.785;
    const float mileToKilome = 1.609;
    float mile, gallon;

    printf("Enter miles and gallon (e.g 12.5 5.2): ");
    scanf("%f %f", &mile, &gallon);

    printf("%.1f miles/gallon\n", mile / gallon);
    printf("%.1f litres/100 kilo\n", (100 * gallon * galToLitre) / (mile * mileToKilome));
}
