int is_prime(int num){
    for(int i=2;i<=num;i++){
        if(num%i==0)return 0;
    }
    return 1;
}

void main(){
    int n=2;
    int numprinted=0;
    while(numprinted < 200){
        if(is_prime(n) == 1){
            printf("%*d",5,num);
            if((numprinted+1)%10 == 0) printf("\n");
            numprinted++;
        }
        n++;
    }
    return EXIT_SUCCESS;
}

