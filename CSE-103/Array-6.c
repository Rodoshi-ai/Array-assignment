#include <stdio.h>

int main()
{
    int x[100],c=0,i,gradeA=0,gradeB=0,gradeC=0,gradeD=0;

    for(i=0;i<8;i++){
            printf("Enter the numbers: ");
            scanf("%d",&x[i]);
        if(x[i]>=90){
           gradeA++;
        }
        else if(x[i]>=80){
            gradeB++;
        }
        else if(x[i]>=70){
            gradeC++;
        }
        else if(x[i]>=60){
            gradeD++;
        }
    }
    printf("Grade distribution.\n");
    printf("Grade A:%d\n",gradeA);
    printf("Grade B:%d\n",gradeB);
    printf("Grade C:%d\n",gradeC);
    printf("Grade D:%d\n",gradeD);

    if(gradeA>gradeB && gradeB>gradeC && gradeC>gradeD){
        printf("\n most students achieved grade A.\n");
    }
    else if(gradeB>gradeA && gradeB>gradeC && gradeB>gradeD){
        printf("\n most students achieved grade B.\n");
    }
    else if(gradeC>gradeA && gradeC>gradeB && gradeC){
        printf("\n most student achieved grade C.\n");
    }
    else if(gradeD>gradeA && gradeD>gradeB && gradeD>gradeC){
        printf("\n most student achieved grade D.\n");
    }
    return 0;
}
