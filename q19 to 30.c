#include <stdio.h>  
void main()
{
    int custid, conu;  
    float chg, surchg = 0, gramt, netamt; 
    char connm[25]; 
    printf("Input Customer ID :"); 
    scanf("%d", &custid);  
    printf("Input the name of the customer :");  
    scanf("%s", connm);  
    printf("Input the unit consumed by the customer : ");  
    scanf("%d", &conu);  
    if (conu < 350)
        chg = 1.20; 
    else if (conu >=350 && conu < 600)
        chg = 1.50;  
    else if (conu >= 600 && conu < 800)
        chg = 1.80;  
    else
    chg = 2.00;  
    gramt = conu * chg; 
    if (gramt >256 )
        surchg = gramt * 18 / 256.0;  
    netamt = gramt + surchg; 
    if (netamt < 544)
        netamt = 544;  
    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", custid);
    printf("Customer Name                       :%s\n", connm);
    printf("unit Consumed                       :%d\n", conu);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", chg, gramt);
    printf("Surchage Amount                     :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}  