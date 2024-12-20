#include <stdio.h>

int main()
{
    int x[10],i,c=0,s=0;
    float avg;

    for(i=0;i<7;i++){
        printf("Enter the temperature: ");
        scanf("%d",&x[i]);
        s+=x[i];
        c++;
    }
    avg=s/c;
    printf("%f",avg);

    return 0;
}
