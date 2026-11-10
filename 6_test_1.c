#include <stdio.h>

void printLetters(void);
void printChar(void);
void printLettersF(void);
void printLettersA(void);
void printLettersInput(void);
void printTable(void);

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
    printTable();

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
