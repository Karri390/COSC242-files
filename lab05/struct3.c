#include <stdio.h>
#include <stdlib.h>

#define OCEAN_MAX 41981

struct ocean_datum {
    int x;
    int y;
    double conc;
};

void print_ocean_datum(struct ocean_datum *o){
    printf("%d %d %.4f\n", o->x,o->y,o->conc);
}

int read_ocean_datum(struct ocean_datum *o){
    return 3==scanf("%d %d %lg", &o->x, &o->y, &o->conc);
}

int main(void) {
    struct ocean_datum ocean_data[OCEAN_MAX];
    int num_items;
    int i;
    int j;

    num_items = 0;
    while(num_items < OCEAN_MAX && read_ocean_datum(&ocean_data[num_items])){
        num_items+=1;
    }
   struct ocean_datum key;
  
   for(i=1;i<num_items;i++){
       key = ocean_data[i];
       j=i-1;
       while(j>=0 && ocean_data[j].conc > key.conc){
           ocean_data[j+1] = ocean_data[j];
           j--;
       }
       ocean_data[j+1] = key;
   }

for(i = 0; i<num_items;i++){
    print_ocean_datum(&ocean_data[i]);
}
return EXIT_SUCCESS;
}



