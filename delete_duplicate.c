#include<conio.h>
#include<stdio.h>
#include "helper.c"

void print_unique_array();
int linear_search(int value);
int temp[100];
int loopc = 0;

void delete_duplicate(int a[]) {
	int n=0;
	int i = 0;
    input(a);
	n=lenghtOfarray();	
    //1.temp[loopc] : A temporary array for storing elements that don't repeat themselves in the array.
    //2.++loopc : In order to find number of unique elements in temporary array.
	temp[loopc]=a[0];
	for(i=1;i<n;i++) {
		if(linear_search(a[i])==0) {
			++loopc;
			temp[loopc]=a[i];		
		}
	}
	print_unique_array();		
}
	
int linear_search(int value) {
	int k=0,flag=0;
	for(k=0;k<=loopc;k++) {
		if(temp[k]==value) {
			flag=1;
			break;	
		}
	}
	return flag;
}

void print_unique_array()
{
	int p = 0;
	printf("\n The array after deleting duplicate element :\n");
	for(p=0;p<=loopc;p++) {
		printf(" %d ",temp[p]);
	}	
    printf("\n");
}