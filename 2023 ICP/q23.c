#include <stdio.h>
int main(){
      int i=0 ,j=0;

      for(i=1; i<4;i++){
            for(j=0; j<(i/2); j++){
                  printf("%d ",j);
            for(j=(i/2)+1; j<=i; j++){
                  printf("%d ",j);
            }
            printf("\n");
      }
     
return 0;
}

/**
3 9 81  */

1
0 2
0 2 3