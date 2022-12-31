#include<stdio.h>
#include<conio.h>

int addition(int a[100],int n);

void add() {
        int a[100],n,i;
        input(a);
        n=lenghtOfarray();
        printf("\nSum = %d", addition(a,n));
}

int addition(int a[100],int n) {
        int i,sum=0;
        for(i=0;i<n;i++) {
            sum+=a[i];
        }  
        return sum;
}
