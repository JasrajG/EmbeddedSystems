#include <stdio.h>
#include <stdlib.h>

void backwardArray(int arr[]);

    int main(){

        char buffer[50];
        int arr[6];
        char *ptr=buffer;
        char *endptr;

        printf("Enter Values of six element array in a single line, separated by a space:\n");
        fgets(buffer, 50, stdin);
        
        for(int i=0; i<6; i++){

            arr[i]=(int) strtol(ptr,&endptr, 10);
            ptr= endptr;

        } 

         


        
        backwardArray(arr);

        for (int i =0;i<6; i++){
            printf(" Element %d: %d ", i, arr[i]);

        }
        return 0;

    }

//will only work for 6 elements
void backwardArray(int arr[]){
    int temp;
    for(int i=0; i<3; i++){
        temp = arr[i];
        arr[i] = arr[6-(i+1)];
        arr[6-(i+1)] = temp;

    }

    
}