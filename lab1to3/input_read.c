#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double my_double;
    int my_int1, my_int2;
    int return_code;

    printf("This program will read in a double and two integers. \n");
    printf("Please enter a floating-point number: ");

    /*make sure output is immedietly written to screen */

    fflush(stdout);
    return_code = scanf("%lg", &my_double);

   if (return_code !=1) {
       printf("scanf returned code %d\n", return_code);
       return EXIT_FAILURE;
   }
   printf("Now two integers: ");
   fflush(stdout);
   return_code = scanf("%d%d" , &my_int1, &my_int2);

   if(return_code !=2) {
       printf("scanf returned code %d\n", return_code);
       return EXIT_FAILURE;
   }
   printf("Your inputs were: %f, %d, and %d\n", my_double, my_int1, my_int2);

   return EXIT_SUCCESS;
}

