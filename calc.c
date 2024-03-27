#include <stdio.h>
#include <math.h>
float add();
float sub();
float mult();
float div();
float slope();
float ctf();
float ftc();
int quit();

int main() {
    int programslct;

    printf("C Calculator\n");
    printf("Choose a Option\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplcation\n");
    printf("4. Division\n");
    printf("5. Slope\n");
    printf("6. Celsius to Fahrenheit\n");
    printf("7. Fahrenheit to Celsius\n");
    printf("8. Quit\n");
    scanf("%i", &programslct);
    if (programslct == 1)
{
    add();
}
else if (programslct == 2)
{
    sub();
}
else if (programslct == 3) {
    mult();
}
else if (programslct == 4) {
    div();
}
else if (programslct == 5) {
    slope();
}
else if (programslct == 6) {
    ctf();
}
else if (programslct == 7) {
    ftc();
}
else if (programslct == 8) {
    quit();
}

}
float add() {
    float add1;
    float add2;
    float addsum;
    printf("Enter first number.\n");
    scanf("%f", &add1);
    printf("Enter second number.\n");
    scanf("%f", &add2);
    addsum = add1 + add2;
    printf("Your answer is: %f\n", addsum);
    main();
}

float sub() {
    float sub1;
    float sub2;
    float subsum;
    printf("Enter first number.\n");
    scanf("%f", &sub1);
    printf("Enter second number.\n");
    scanf("%f", &sub2);
    subsum = sub1 - sub2;
    printf("Your answer is: %f\n", subsum);
    main();
}

float mult() {
    float mult1;
    float mult2;
    float multsum;
    printf("Enter first number.\n");
    scanf("%f", &mult1);
    printf("Enter second number.\n");
    scanf("%f", &mult2);
    multsum = mult1 * mult2;
    printf("Your answer is: %f\n", multsum);
    main();
}

float div() {
    float div1;
    float div2;
    float divsum;
    printf("Enter first number.\n");
    scanf("%f", &div1);
    printf("Enter second number.\n");
    scanf("%f", &div2);
    divsum = div1 / div2;
    printf("Your answer is: %f\n", divsum);
    main();
}

float slope() {
    float y1;
    float y2;
    float x1;
    float x2;
    float slopeanswer;
    printf("what is y2:\n");
    scanf("%f", &y2);
    printf("what is y1:\n");
    scanf("%f", &y1);
    printf("what is x2:\n");
    scanf("%f", &x2);
    printf("what is x1:\n");
    scanf("%f", &x1);
    slopeanswer = y2 - y1 / x2 - x1;
    printf("Your Answer is :%f\n", slopeanswer);
    main();
}

float ctf() {
    float inputctf;
    float ctfanswer;

    printf("Enter Your Temperature in Celsius:\n");
    scanf("%f", &inputctf);
    
    ctfanswer = (inputctf * 9/5) + 32;

    printf("Your Temperature in Fahrenheit is: ");
    printf("%f\n", ctfanswer);
    main();
}

float ftc() {
    float inputftc;
    float ftcanswer;

    printf("Enter Your Temperature in Fahrenheit:\n");
    scanf("%f", &inputftc);
    
    ftcanswer = (inputftc - 32) * 5/9;

    printf("Your Temperature in Celsius is: ");
    printf("%f\n", ftcanswer);
    main();
}

int quit() {
    return 0;
}
