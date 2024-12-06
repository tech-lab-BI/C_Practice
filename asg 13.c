#include<stdio.h>
#define biki 5
void main(){
	char a[biki],i;
	printf("Enter array values:");
	for(i=0;i<5;i++)
		scanf("%c",&a[i]);
	printf("Array values:");
	for(i=0;i<5;i++)
		printf("%c\t",a[i]);
}
