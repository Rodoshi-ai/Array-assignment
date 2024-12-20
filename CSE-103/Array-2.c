#include <stdio.h>

int main()
{
    int x[10],i,c=0,d,s=0,j,avg;

    for(i=0;i<6;i++){
    printf("Enter the age: ");
    scanf("%d",&x[i]);
    s+=x[i];
    c++;
  }

  avg=s/c;
  for(j=0;j<6;j++){
    if(x[j]>avg){
        d++;
    }
  }
  printf("%d",d);
  return 0;
}
