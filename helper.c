#include<stdio.h>
void input(int ax[100]);
int numOfElem=0,a[100];
int lenghtOfarray();

void input(int ax[100]) {
	int i = 0;
	printf("\n Enter the size for the array : ");
	scanf("%d",&numOfElem);
	printf("\n Enter the elements in the array :\n");
	for(i=0;i<numOfElem;i++) {
		scanf("%d",&ax[i]);
 	}
}

int lenghtOfarray(){ 
	return numOfElem;
}

