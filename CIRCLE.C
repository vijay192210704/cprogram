#include <stdio.h>
int main()
{
  float radius, area;

  printf("Enter the radius of a circle\n");

  scanf("%f", &radius);

  area = 3.141*radius*radius;

  printf("Area of the circle = %.2f\n", area);  

  return 0;
}
