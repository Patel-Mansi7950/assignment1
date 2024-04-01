#include <stdio.h>

void main() {
  float ht;
  printf("Enter  the Height (in centimeters)\n");
  scanf("%f", & ht);
  if (ht < 150)
    printf("This person is Short\n");
  else if ((ht >= 150) && (ht <= 165.0))
    printf("This person is Average Height\n");
  else if ((ht >= 165.0) && (ht <= 195.0))
    printf("This person is Tall\n");
  else
    printf("This person is of Abnormal height\n");
} 