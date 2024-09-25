#include<stdio.h>
int main() {
    double principal, rate, Amount;
    int n, time;
    printf("Principal: ");
    scanf("%lf", &principal);
    printf("Rate: ");
    scanf("%lf", &rate);
    printf("times (n): ");
    scanf("%d", &n);
    printf("time (t); ");
    scanf("%d", &time);
    rate = rate / 100; 
    Amount= principal * pow((1 + rate / n), n * time);
    printf("Compound_interest = %.4lf\n", Amount);
return 0;
}