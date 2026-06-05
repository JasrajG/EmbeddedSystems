#include <stdio.h>

void main(){




float arr[4];
float n, avg, sum=0;

for(int i=0; i<10; i++){
printf("Enter reading %d:", (i+1));
scanf("%f",&n);
arr[(i%4)]=n; 


if (i<3){

for(int j=0; j<=i; j++){
sum+=arr[j];
}

avg=sum/(i+1);
printf("Average:\t %0.2f\n", avg);
sum=0;
}


else {
for(int j=0; j<4; j++){

sum+=arr[j];
}

avg=sum/4;

printf("Average:\t %0.2f\n", avg);
sum=0;
}





}//end of for loop



}
