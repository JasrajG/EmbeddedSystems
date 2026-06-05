#include <stdio.h>
#include <math.h>


int exp_f( int n){
int j=1;
for (int i=1; i<=n; i++){
j *= 10;


}
return j;
}



void main(){
int M, i, j;
scanf("%d %d %d", &M, &i, &j);
printf("M is %d, i is %d, j is %d\n", M, i ,j);
M = M % (int) exp_f(j+1);
M = M/ exp_f(i);

printf("%d\n", M);

}
