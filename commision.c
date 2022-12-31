#include<stdio.h>
#include<conio.h>
int inputOfsales();
float sales;
void Commision();

void commision() {
    float comm=0;
    int c=100;
    inputOfsales();
    if(sales<100) {
        comm = 0;
    }
    else if((sales>=100)&&(sales<=500)) {
        comm = (0.1*sales);
    }
    else if(sales>500) {
        comm = (c + ((sales-500)*0.08));
    }
    printf("\n The commision on sales of %f is %f.",sales,comm);
}

int inputOfsales() {
	printf("\n Enter the sales : ");
	scanf("%f",&sales);
	return sales;
}