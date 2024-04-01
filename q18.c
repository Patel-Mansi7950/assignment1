#include <stdio.h>
int main(){
    float basic, da, hra, gross_salary;
    
    // Asking for input
    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);
    
    // Calculating D.A and H.R.A amount
    if (basic <= 25000){
        da = (basic * 10) / 100;
        hra = (basic * 15) / 100;
    }
    else if (basic <= 40000){
        da = (basic * 12) / 100;
        hra = (basic * 18) / 100;
    }
    else{
        da = (basic * 15) / 100;
        hra = (basic * 20) / 100;
    }
    
    // Calculating gross salary 
    gross_salary = basic + da + hra;
    
    // Displaying output
    printf("Gross salary of employee: %.2f", gross_salary);
    return 0;
}
Output

Enter the basic salary of an employee: 35000
Gross salary of employee: 45500.00
How Does This Program Work ?
    float basic, da, hra, gross_salary;
In the above program, we have declared four floating data type variables named basic, da, hra and gross_salary.

    // Asking for input
    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);
Then, this program asks the user to enter the basic salary of the employee.

    // Calculating D.A and H.R.A amount
    if (basic <= 25000){
        da = (basic * 10) / 100;
        hra = (basic * 15) / 100;
    }
    else if (basic <= 40000){
        da = (basic * 12) / 100;
        hra = (basic * 18) / 100;
    }
    else{
        da = (basic * 15) / 100;
        hra = (basic * 20) / 100;
    }
If the basic pay is less than or equal to 25000, then:
da = 10% of the basic pay
hra = 15 % of the basic pay
If the basic pay is less than or equal to 40000, then:
da = 12% of the basic pay
hra = 18% of the basic pay
And if the basic pay is greater than 40000, then in this case:
da = 15% of the basic pay
hra = 20% of the basic pay
    // Calculating gross salary 
    gross_salary = basic + da + hra;
After calculating da and hra, we compute the gross salary of the employee by using the formula:

Gross Salary = Basic Pay + DA + HRA

    // Displaying output
    printf("Gross salary of employee: %.2f", gross_salary);
The gross salary calculated above is displayed on the screen using printf() function. Here, %.2f is used to print the gross salary salary only up to 2 decimal places.

C Program to Calculate Gross Salary of an Employee When DA and HRA is Not Given
// C Program to Calculate Gross Salary When DA and HRA is Not Given
#include <stdio.h>
int main(){
    float basic, da_percent, hra_percent, da, hra, gross_salary;
    
    // Asking for input
    printf("Enter the basic pay: ");
    scanf("%f", &basic);
    printf("Enter the DA percentage: ");
    scanf("%f", &da_percent);
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percent);
    
    // Calculating D.A and H.R.A
    da = (basic * da_percent) / 100;
    hra = (basic * hra_percent) / 100;
    
    // Calculating gross salary
    gross_salary = basic + da + hra;
    
    // Displaying output
    printf("Gross salary of the employee is: %.2f", gross_salary);
    return 0;
}


















