#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rn = 0;
    int winner = 0;
    double s1 = 0.0;
    double s2 = 0.0;
    double s3 = 0.0;
    double avg=0.0;
    double max = 0.0;
    int count=0;

    while (4 == scanf("%d%lg%lg%lg", &rn, &s1, &s2, &s3)){
       if(s1<s2 && s1<s3){
        avg = (s2+s3)/2;
         }

    else if(s2<s3 && s2<s1){
        avg = (s3+s1)/2;
        
    }
    else 
    {
        avg= (s1+s2)/2;
        
    }
     count+=1;
    
    if(count == 1){
        max = avg;
        winner = rn;
     }

    else{
        if(max<avg){
            max = avg;
            winner = rn;
        }
        else continue;
    }
    }
    printf("Winner is contestant number %d who scored %1.1f points\n",winner,max);
    
return EXIT_SUCCESS;
}



