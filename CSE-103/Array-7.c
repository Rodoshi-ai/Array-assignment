#include <stdio.h>

int main()
{
    int x[10],y[10],i,q1=0,q2=0,q3=0,q4=0;

    for(i=0;i<4;i++){
        printf("Enter the 2D point: ");
        scanf("%d,%d",&x[i],&y[i]);
        if(x[i]>0 && y[i]>0){
            q1++;
        }
        else if(x[i]<0 && y[i]>0){
            q2++;
        }
        else if(x[i]<0 && y[i]<0){
            q3++;
        }
        else if(x[i]>0 && y[i]<0){
            q4++;
        }
    }

    printf("\n number of points in each quadrant: ");
    printf("Quadrant 1:%d\n",q1);
    printf("Quadrant 2:%d\n",q2);
    printf("Quadrant 3:%d\n",q3);
    printf("Quadrant 4:%d\n",q4);

    return 0;
}
