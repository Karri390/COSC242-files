#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LEN 80
#define ARRAY_LEN 10000

void *emalloc(size_t s) {
        void *result = malloc(s);
        if(NULL == result) {
        fprintf(stderr, "Memory allocation failed! \n");
        exit(EXIT_FAILURE);
    }
    return result;
}

int main(void) {
    char word[STRING_LEN];
    char *wordlist[ARRAY_LEN];
    int num_words;
    int i;
num_words = 0;
    while(num_words < ARRAY_LEN && scanf("%79s", word)) {
        wordlist[num_words] = emalloc((strlen(word)+1) * sizeof wordlist[0][0]);
        strcpy(wordlist[num_words], word);
        num_words++;
    }

    sort_words(wordlist,num_words);   
    for(i = 0; i< num_words; i++){
        printf("%s\n", wordlist[i]);
    }
 
   for(i =0;i<num_words;i++){
   free(wordlist[i]);
   }

    return EXIT_SUCCESS;
}


void sort_words(char **w, int n){
    int i; int j;
    char *key;


    for(i=1;i<n;i++){
        key  = w[i];
        for(j=i-1; j>0;j--){
            if(strcmp(w[j],key)>0){
              w[j+1] = w[j];
            }
        else{
            w[j+1] = key;
            break;
        }
        
    }
}
}




















