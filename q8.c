#include <stdio.h>     // Include the standard input/output header file.
int main() {
    float rec_width;        
    float rec_height;        
    float rec_perimeter;     
    printf("Input the height of the Rectangle : ");
    scanf("%f", &rec_height);
    printf("Input the width of the Rectangle : ");
    scanf("%f", &rec_width);
    rec_perimeter = 2.0 * (rec_height + rec_width);
    printf("Perimeter of the Rectangle is : %f\n", rec_perimeter);

    return 0;  
}

