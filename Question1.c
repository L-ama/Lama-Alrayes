#include<stdio.h>
 int main()
{
    float circumference, side_lenght,area;
    printf("enter the side_lenght of the suqare:%f\n");
    scanf("%f",&side_lenght);
    circumference= 4 * side_lenght;
    area= side_lenght * side_lenght;
    printf("the circumference of the suqare:%f\n", circumference);
    printf("area of the suqare:%f\n", area);
    return 0;
}
