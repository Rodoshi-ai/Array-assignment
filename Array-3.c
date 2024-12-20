#include <stdio.h>

int main()
{
    int x[10],c=0,i;

    for(i=0;i<6;i++){
        printf("Enter the age: ");
        scanf("%d",&x[i]);
        if(x[i]>=13 && x[i]<=19){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
