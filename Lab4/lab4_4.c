#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    char buffer[500];
    fgets(buffer,500, stdin);
    sscanf(buffer, "%d %d", &n, &m);
    
    if (n<1){
        printf("n must be greater than 0\n");
        return 1;
    }
    if (m>50){
        printf("m must be less than 50\n");
        return 1;
    }
    
    



    char *ptr, *endptr;
    int arr[m*n];
     for (int i = 0;i<n; i++){
        fgets(buffer, 500, stdin);
        ptr = buffer;
        for (int j = i*m; j< (i+1)*m; j++ ){
            *(arr+j)=(int) strtol(ptr,&endptr, 10);
            ptr= endptr;

        }

    }

    
     



    for (int i = 0;i<n; i++){
        for (int j = i*m; j< (i+1)*m; j++ ){
            if (j == ((i+1)*m)-1){
                printf("%5d\n",i+1);
            }

            if (*(arr+j)>*(arr+j+1)){
                break;
            }

        }

    }
    




    return 0;
}