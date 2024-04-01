#include <stdio.h>
void main()
{
    int ndays, year, week, days;
 
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365);
    days =(ndays % 365);
    printf ("%d is equivalent to %d years, %d weeks and %d daysn",
            ndays, year, week, days);
}





















