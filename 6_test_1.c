#include <stdio.h>
#include <string.h>
#include <math.h>

void printLetters(void);
void printChar(void);
void printLettersF(void);
void printLettersA(void);
void printLettersInput(void);
void printTable(void);
void printCharArray(void);
void culTwoFloat(void);
void culTwoFloatFun(void);
double culval(double v1, double v2);
void culSumSquare(void);
void printInt(void);
void culSumSquence(void);
void cul2pow(void);

int main(void)
{
    //Q1
    //printLetters();
    //Q2
    //printChar();
    //Q3
    //printLettersF();
    //Q4
    //printLettersA();
    //Q5
    //printLettersInput();
    //Q6
    //printTable();
    //Q7
    //printCharArray();
    //Q8
    //culTwoFloat();
    //Q9
    //culTwoFloatFun();
    //Q10
    //culSumSquare();
    //Q11
    //printInt();
    //Q12
    //culSumSquence();
    //Q13
    cul2pow();

    return 0;
}

void printLetters(void)
{
    const int letterNum = 26;
    char ch, letters[letterNum];
    int i;

    for (i = 0, ch = 'a'; i < letterNum; i++, ch++) {
        letters[i] = ch;
        printf("%c ", ch);
    }
    printf("\n");
}

void printChar(void)
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("$");
        }
        printf("\n");
    }
}

void printLettersF(void)
{
    char ch;
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0, ch = 'F'; j < i + 1; j++, ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

void printLettersA(void)
{
    char ch;
    int i, j;

    for (i = 0, ch = 'A'; i < 6; i++) {
        for (j = 0; j < i + 1; j++, ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

void printLettersInput(void)
{
    char ch, in_ch_tmp, out_ch_tmp;
    int i, j;

    printf("Enter a Upper Letter (e.g 'E'): ");
    scanf("%c", &ch);
    for (i = 0, out_ch_tmp = ch; out_ch_tmp >= 'A'; out_ch_tmp--, i++) {
        for (j = 0; j < ch - 'A' - i; j++) {
            printf(" ");
        }
        for (j = 0, in_ch_tmp = 'A'; j < i + 1; j++, in_ch_tmp++) {
            printf("%c", in_ch_tmp);
        }
        for(j = 0, in_ch_tmp-=2; j < i; j++, in_ch_tmp--) {
            printf("%c", in_ch_tmp);
        }
        printf("\n");
    }
}

void printTable(void)
{
    int num1, num2, rows, n;
    int i;

    printf("Enter two integers (e.g 3 8): ");
    scanf("%d %d", &num1, &num2);
    printf("Integer  Square  Cube\n");
    rows = num2 - num1 + 1;
    for (i = 0; i < rows; i++) {
        n = num1 + i;
        printf("%7d  %6d  %4d\n", n, n * n, n * n * n);
    }
}

void printCharArray(void)
{
    char ch_arr[20];
    int i;
    size_t len;

    printf("Enter a word: ");
    scanf("%s", ch_arr);
    len = strlen(ch_arr);
    for (i = len - 1; i >= 0; i--) {
        printf("%c", ch_arr[i]);
    }
    printf("\n");
}

void culTwoFloat(void)
{
    double f1, f2;

    printf("Enter two float numbers: ");
    while (scanf("%lf %lf", &f1, &f2) == 2) {
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.4f\n\n", f1, f2, f1, f2,
        (f1 - f2) / (f1 * f2));
        printf("Enter the next values (type non-number to quit): ");
    }
    printf("done\n");
}

void culTwoFloatFun(void)
{
    double f1, f2, ret;

    printf("Enter two float numbers: ");
    while (scanf("%lf %lf", &f1, &f2) == 2) {
        ret = culval(f1, f2);
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.4f\n\n", f1, f2, f1, f2, ret);
        printf("Enter the next values (type non-number to quit): ");
    }
    printf("done\n");
}
double culval(double v1, double v2)
{
    return (v1 - v2) / (v1 * v2);
}

void culSumSquare(void)
{
    int upperint, lowerint, i, sum;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lowerint, &upperint);
    while (upperint > lowerint) {
        for (i = lowerint, sum = 0; i <= upperint; i++) {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n\n",
        lowerint * lowerint, upperint * upperint, sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lowerint, &upperint);
    }
    printf("Done\n");
}

void printInt(void)
{
    const int SIZE = 8;
    int arr[SIZE], i;

    printf("Enter eight integers: ");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void culSumSquence(void)
{
    double tot_1, tot_2;
    int deno, count;

    printf("Enter the count: ");
    scanf("%d", &count);
    while (count > 0) {
        for (deno = 1, tot_1 = 0, tot_2 = 0; deno <= count; deno++) {
            tot_1 += 1.0 / deno;
            tot_2 += 1.0 / ((pow(-1, deno - 1)) * deno);
        }
        printf("Squence 1 converges to %.8f after %d times iteration\n", tot_1, count);
        printf("Squence 2 converges to %.8f after %d times iteration\n\n", tot_2, count);
        printf("Enter the next count: ");
        scanf("%d", &count);
    }
    printf("Done\n");
}

void cul2pow()
{
    
}