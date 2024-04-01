#include <stdio.h>

void main()
	{
		char a;
		printf("Enter Any Key to Check Whether the Given Character Is an Uppercase Letter or Lowercase Letter or a Digit or a Special Character.: ");
			scanf("%c", &a);

			if (a >= 65 && a < 90)
			{
				printf("\nCharacter is the Uppercase\n");
			}
			else
			{
				if (a >= 97 && a <= 122)
				{
					printf("\nCharacter is the Lowercase\n");
				}
				else
				{
					if (a >= 48 && a <= 57)
					{
						printf("\nCharacter is the  Digit\n");
					}
					else
                    {
                        printf("\n character is the special symbol\n");
                    }
                }
            } 
    }               