#include <stdio.h>
#include <stdlib.h>

int main(void){
double a=0.0;
double b=0.0;
double c=0.0;
int n=0;
double win_score = 0.0;
int winner =0;
double avg=0.0;

while(4==scanf("%d%lg%lg%lg", &n, &a, &b, &c)){
if(a<b && a<c){
avg = (b+c)/2;
}
else if(b<a && b<c){
avg = (a+c)/2;

}
else {
avg = (a+b)/2;
}

if(win_score == 0.0 && winner == 0){
    win_score = avg;
    winner = n;
}

if(win_score<avg){
 win_score =avg;
 winner =n;

}

}

printf("%d\n",winner);

return EXIT_SUCCESS;
}
