#include <stdio.h>

int main()
{
    int x[100],i,highestTemp=0,c=0;

    for(i=0;i<7;i++){
        printf("Enter the temperature: ");
        scanf("%d",&x[i]);

        if(x[i]>highestTemp){
                highestTemp=x[i];
        }
          }

        for(i=1;i<7;i++){
        if(highestTemp==x[i]){
           c++;
        }
    }
        printf("\n the highest temperature is:%d\n",highestTemp);
        printf("the highest temperature occurred on %d days\n",c);

        return 0;
}
