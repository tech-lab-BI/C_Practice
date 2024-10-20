#include<stdio.h>
#include<stdlib.h>
void insertion(int*,int*);
void deletion(int*,int*);
void replace(int*,int);
void search(int*,int);
void display(int*,int);

void main(){
	int a[20],i,ch;
	int n;
	printf("How many element u want take :: ");
	scanf("%d",&n);
	printf("Enter elements :: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("  ::MENU::\n1> Insertion\n2> Delete\n3> Replace\n4> Search\n5> Display\n6> Exit.\n");
	
	while(1){
		printf("\nWhat oparation u want : ");
		scanf("%d",&ch);
		printf("\n");
		switch(ch){
			case 1:
				insertion(a,&n);
				break;
			case 2:
				deletion(a,&n);
				break;
			case 3:
				replace(a,n);
				break;
			case 4:
				search(a,n);
				break;
			case 5:
				display(a,n);
				break;
			default:
				exit(0);	
		}
	}
}
void insertion(int a[],int *n){
	int val,pos,i;
	printf("Enter the new value :: ");
	scanf("%d",&val);
	printf("Enter it`s position :: ");
	scanf("%d",&pos);
	pos = pos-1;
	for(i=*n-1;i>=pos;i--){
		a[i+1] = a[i];
	}
	a[pos] = val;
	*n = *n+1;
}
void deletion(int a[],int *n){
	int i,pos;
	printf("Enter the position u want to delete :: ");
	scanf("%d",&pos);
	pos = pos-1;
	for(i=pos;i<*n-1;i++){
		a[i] = a[i+1];
	}
	*n = *n-1;
}
void replace(int a[],int n){
	int val,pos;
	printf("Enter replaced value :: ");
	scanf("%d",&val);
	printf("Enter it`s position : ");
	scanf("%d",&pos);
	pos = pos-1;
	a[pos] = val;
}
void search(int a[],int n){
	int val,i;
	printf("Enter searching value :: ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(a[i] == val){
			printf("success index=%d",i);
			break;
		}	
	}
	if(i == n){
			printf("Unsuccessful");
		}
}
void display(int a[],int n){
	int i;
	printf("Display :: \n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
