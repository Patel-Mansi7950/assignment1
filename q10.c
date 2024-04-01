#include <stdio.h>  
float find_surface_area_of_Rectangular_prism(float l, float w, float h)    
{   
float surface_area_of_Rectangular_prism ;  
surface_area_of_Rectangular_prism =  2 * ((l * h) + (w * h) + (l * w));  
return(surface_area_of_Rectangular_prism );   
}   
int main()   
{   
float l = 4.55, w = 9.10, h = 10;  
printf("Surface area of the rectangular prism  is: %f", find_surface_area_of_Rectangular_prism(l,w,h));     
return 0;   
}  