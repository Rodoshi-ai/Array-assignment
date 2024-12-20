9. Write a C program to input all sides of a triangle and check whether triangle is valid or
not.


#include<stdio.h>
int main()
{
    float x,y,z;
    printf("enter three sides\n");
    scanf("%f%f%f",&x,&y,&z);
    if(x+y>z&&y+z>x&&z+x>y){
        printf("valid triangle");
    }
        else {
        printf("not valid triangle");
    }
    return 0;
}
