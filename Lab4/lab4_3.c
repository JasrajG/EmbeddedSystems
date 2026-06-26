#include <stdio.h>


void applyPotion(int* age, int* strength, float* weight, int* wisdom);
int main(){
    int age, strength, wisdom;
    float weight;
    char buffer[50];
    printf("Enter age: ");
    fgets(buffer, 50, stdin);
    sscanf(buffer, "%d", &age);
    printf("Enter strength level: ");
    fgets(buffer, 50, stdin);
    sscanf(buffer, "%d", &strength);
    printf("Enter weight: ");
    fgets(buffer, 50, stdin);
    sscanf(buffer, "%f", &weight);
    printf("Enter wisdom level: ");
    fgets(buffer, 50, stdin);
    sscanf(buffer, "%d", &wisdom);

    applyPotion(&age, &strength, &weight, &wisdom);

    printf("After drinking the reversal potion:\n");
    printf("Age: %d\n", age);
    printf("Strength: %d\n", strength);
    printf("Weight: %.2f\n", weight);
    printf("Wisdom %d\n", wisdom);





    return 0;
}

void applyPotion(int* age, int* strength, float* weight, int* wisdom){
    int a = *age;
    if (a<= 25){
        *strength = *strength*2;
    }
    else if(a>25 && a<=40){
        *weight=*weight*0.9;
    }
    else{
        *wisdom+=5;
    }
}