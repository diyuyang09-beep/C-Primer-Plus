#include <stdio.h>

void jolly(void);
void deny(void);
void br(void);
void ic(void);
void simle(void);
void one_three(void);
void two(void);

int main(void)
{
    int age, days;
    int toes;

    // Q1
    printf("Yuyang Di\n");
    printf("Yuyang\nDi\n");
    printf("Yuyang ");
    printf("Di\n");

    //Q2
    printf("I'm Yuyang Di, ");
    printf("I live in Hangzhou.\n");

    // Q3
    age = 23;
    days = age * 365;
    printf("I'm %d years old, ", age);
    printf("and I've lived in the world for %d days.\n", days);

    // Q4
    jolly();
    jolly();
    jolly();
    deny();

    //Q5
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");

    //Q6
    toes = 10;
    printf("toes: %d\n", toes);
    printf("two toes: %d\n", toes * 2);
    printf("toes square: %d\n", toes * toes);

    //Q7
    simle();
    simle();
    simle();
    printf("\n");
    simle();
    simle();
    printf("\n");
    simle();
    printf("\n");

    //Q8
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

void simle(void)
{
    printf("Simle!");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}