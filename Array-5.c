#include <stdio.h>

int main ()
{
    int x[100],i,fullmarks=0;

    for(i=0;i<6;i++){
        printf("Enter the number: ");
        scanf("%d",&x[i]);
        if(x[i]==30){
            fullmarks++;
        }
    }
    if(fullmarks){
        printf("Yes.At least one student got full marks.\n");
    }
    else{
        printf("No. Nobody got full marks.\n");
    }
    return 0;
}
