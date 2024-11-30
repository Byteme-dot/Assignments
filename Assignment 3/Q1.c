#include <stdio.h>
#include <math.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);
double log_values(double, double);
double sq_roots(double);

int main() {
    int choice;
    printf("******************************\n");
    printf("**********Calculator**********\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Log Values\n");
    printf("6. Square Roots\n");
    printf("******************************\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    if (choice==1) {
        addition();
    }else if (choice==2){
        subtraction();
    }else if (choice==3){
        multiplication();
    }else if (choice==4){
        division();
    }else if (choice==5){
        double value,base,result;
        printf("Enter the value: ");
        scanf("%lf", &value);
        printf("Enter the base: ");
        scanf("%lf", &base);
        result=log_values(value,base);
        if (result!=-1) {
            printf("log_%.2lf(%.2lf) = %.2lf\n",base,value,result);
        }
    } else if (choice==6) {
        double value,sqrt_result;
        printf("Enter the value: ");
        scanf("%lf", &value);
        sqrt_result=sq_roots(value);
        if (sqrt_result!=-1) {
            printf("sqrt(%.2lf)=%.2lf\n",value,sqrt_result);
        }
    } else {
        printf("Enter a VALID CHOICE!!!\n");
    }
    return 0;
}

void addition() {
    int num1,num2,sum;
    printf("Enter Number One: ");
    scanf("%d", &num1);
    printf("Enter Number Two: ");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("Sum=%d\n",sum);
}

void subtraction() {
    int num1,num2,diff;
    printf("Enter Number One: ");
    scanf("%d", &num1);
    printf("Enter Number Two: ");
    scanf("%d", &num2);
    diff=num1-num2;
    printf("Difference = %d\n",diff);
}

void multiplication() {
    int num1, num2, mult;
    printf("Enter Number One: ");
    scanf("%d", &num1);
    printf("Enter Number Two: ");
    scanf("%d", &num2);
    mult=num1*num2;
    printf("Multiplication = %d\n", mult);
}

void division() {
    int num1, num2;
    float div_result;
    printf("Enter Number One: ");
    scanf("%d", &num1);
    printf("Enter Number Two: ");
    scanf("%d", &num2);
    if (num2==0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    div_result = (float) num1 / num2;
    printf("Division = %.2f\n", div_result);
}

double log_values(double value, double base) {
    if (value <= 0 || base <= 0) {
        printf("Error: Value and base must be greater than 0.\n");
        return -1;
    }
    if (base == 1) {
        printf("Error: Base must not be 1.\n");
        return -1;
    }
    return log(value) / log(base);
}
double sq_roots(double value){
    if (value < 0){
        printf("Error! Value must be non-negative.\n");
        return -1;
    }
    return sqrt(value);
}
