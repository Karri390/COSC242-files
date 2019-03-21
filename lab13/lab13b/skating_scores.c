#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double avg = 0.0;
    double winner_score = 0.0;
    int winner_num = 0;

    while(4==scanf("%d%lg%lg%lg",&n,&a,&b,&c)){
        if(a<b && a<c){
         avg = (b+c)/2;
        }
        else if(b<a && b<c){
            avg = (a+c)/2;
        }
        else{
            avg = (a+b)/2;
        }
      if(winner_score == 0.0 && winner_num==0){
          winner_score = avg;
          winner_num = n;
      }

      if(avg > winner_score ){
       winner_score = avg;
       winner_num = n;
      }
    }
    printf("%d\n",winner_num);

    return EXIT_SUCCESS;
}

