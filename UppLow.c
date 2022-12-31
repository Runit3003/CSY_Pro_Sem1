#include<stdio.h>

void string_in(char s[100]);
char s[100];

void UppLow() {
    int i=0;
    for (i = 0; s[i]!='\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 32;
        }
    }
    printf("\nString in lower Case :\n %s", s);
}
 
void string_in(char s[100]) {
    printf("\nEnter the string :\n");
    gets(s);
}