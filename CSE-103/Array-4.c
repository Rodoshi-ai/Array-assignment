#include <stdio.h>

int main()
{
    int x[100],i,c=0;

    for(i=0;i<7;i++){
        printf("Enter the temperature: ");
        scanf("%d",&x[i]);
    }

    for(i=1;i<7;i++){
        if(x[i]>x[i-1]){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
