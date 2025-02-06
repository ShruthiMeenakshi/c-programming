#include<stdio.h>
void main()
{
    int r,l,b,aor,por;
    float aoc,coc;
    printf("Enter the length breadth and radius :\n");
    scanf("%d%d%d",&r,&l,&b);
    aor=l*b;
    por=(2*(l+b));
    aoc=3.14*r*r;
    coc=2*3.14*r;
    printf("\n Area of rectangle: %d",aor);
    printf("\n perimeter of rectangle: %d",por);
    printf("\n Area of circle: %0.2f",aoc);
    printf("\n circumference of circle: %0.2f",coc);


}
