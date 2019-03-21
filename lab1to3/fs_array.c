#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 10

int main(void){
double s1=0.0;
double s2=0.0;
double s3=0.0;
double mean1 = 0.0;
double mean2=0.0;
double mean3=0.0;
double sd1 = 0.0;
double sd2 = 0.0;
double sd3 = 0.0;
int rn=0;
int judge1[ARRAY_SIZE];
int judge2[ARRAY_SIZE];
int judge3[ARRAY_SIZE];
int i=0;
int line_count=0;
int sum1=0;
int sum2=0;
int sum3=0;
double dist_sqrd1=0.0;
double dist_sqrd2=0.0;
double dist_sqrd3=0.0;
double sumofdist1=0.0;
double sumofdist2=0.0;
double sumofdist3=0.0;

while(4 == scanf("%d%lg%lg%lg", &rn, &s1, &s2, &s3)){

for(i=0;i<ARRAY_SIZE;i++){
    judge1[i]=s1;
}

for(i=0;i<ARRAY_SIZE;i++){
judge2[i]=s2;
}

for(i=0;i<ARRAY_SIZE;i++){
judge3[i]=s3;
}

line_count+=1;

}

for(i=0;i<ARRAY_SIZE;i++){
    sum1+=judge1[i];
}

for(i=0;i<ARRAY_SIZE;i++){
sum2+=judge2[i];
}

for(i=0;i<ARRAY_SIZE;i++){
sum3+=judge3[i];
}
mean1 = sum1/line_count;
mean2 = sum2/line_count;
mean3 = sum3/line_count;

for(i=0;i<ARRAY_SIZE;i++){
dist_sqrd1 = (judge1[i]-mean1)*(judge1[i]-mean1);
sumofdist1 += dist_sqrd1;
}

for(i=0; i<ARRAY_SIZE;i++){
dist_sqrd2 = (judge2[i]-mean2)*(judge2[i]-mean2);
sumofdist2 += dist_sqrd2;
}

for(i=0; i<ARRAY_SIZE; i++){
    dist_sqrd3 = (judge3[i]-mean3)*(judge3[i]-mean3);;
    sumofdist3 += dist_sqrd3;
}

sd1 = sqrt(sumofdist1/(line_count-1));
sd2 = sqrt(sumofdist2/(line_count-1));
sd3 = sqrt(sumofdist3/(line_count-1));

printf("JUDGE 1 AVERAGE AND SD : %2.1f , %2.1f\n",mean1,sd1);
printf("JUDGE 2 AVERAGE AND SD : %2.1f , %2.1f\n",mean2,sd2);
printf("JUDGE 3 AVERAGE AND SD : %2.1f , %2.1f\n",mean3,sd3);


return EXIT_SUCCESS;
}

