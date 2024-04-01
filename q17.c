#include<stdio.h>
int main(){
 float sum_assured, years, monthly_premium;
 float quarterly_premium, half_yearly_premium, yearly_premium;
 
 printf("Enter your salary:");
 scanf("%d", &sum_assured); 
 
 printf("Enter life insurance policy term(in years):");
 scanf("%d", &years);
 
 printf("Your Monthly Premium    : %8.2f\n", sum_assured/(years*12));
 printf("Your Quarterly Premium  : %8.2f\n", sum_assured/(years*4));
 printf("Your Half Yearly Premium: %8.2f\n", sum_assured/(years*2));
 printf("Your Yearly Premium     : %8.2f\n", sum_assured/(years)); 
 printf("\nNote: Actual premium may vary because of various charges imposed by company.");
 return 0;
}