#include <stdio.h>

int main(){
	

	char buffer[3];
	int l,m;
	printf("Enter value for l:");
	fgets(buffer, 3, stdin);
	sscanf(buffer, "%d", &l);
	printf("Enter value for m:");
	scanf("%d", &m);
	for (int i =0;i<m;i++){
		//printing spaces
		for (int j=0; j<(l-i);j++){
			printf(" ");
		}
		for (int j=0;(j<i+1) && (j<l+1);j++){
			printf("*");
		}
	printf("\n");

	}
	return 0;
}
