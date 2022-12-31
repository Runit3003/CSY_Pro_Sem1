#include<stdio.h>
#include<conio.h>

int greatest(int n1, int n2); 

void GCD() {
      int n1, n2;
      printf("Enter two positive integers:\n");
      scanf("%d %d", &n1, &n2);
      printf("G.C.D of %d and %d is %d.", n1, n2, greatest(n1, n2));
 } 

int greatest(int n1, int n2) {
   if (n2 != 0) {
         return greatest(n2, n1 % n2);
   }
   else {
         return n1;
   }
}
