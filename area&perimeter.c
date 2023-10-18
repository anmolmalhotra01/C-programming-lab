#include <stdio.h>
int main()
{
  float r;//radius of circle
  float s;//side of square
  float l,b;//l=length of rectangle and b=breadth of rectangle
  //circle
printf("Let's find the area and perimeter of circle: \n");
printf("Radius of the circle:\n");
scanf("%f",& r);
printf("Let's find the area and perimeter of square:\n");
printf("Area of circle is:%f\n",3.14*r*r);
printf("Perimeter of circle is:%f\n",2*3.14*r);
// square.
printf("Lets find the area and perimeter of square:\n");
printf("side of the square:\n");
scanf("%f",&s);
printf("Area of the square is:%f\n",s*s);
printf("Perimeter of the square is:%f/n",4*s);
// Rectangle.
printf("lets find the area and perimeter of rectanges:\n");
printf("Length of the rectangle:\n");
scanf("%f",&l);
printf("Breadth of rectangle:\n");
scanf ("%f",&b);
printf("Area of rectangle is :%76f\n",l*b);
printf("Perimeter of rectangle is:%f\n",4*(l+b));
return 0;
}