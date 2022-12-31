#include <stdio.h>
#include <conio.h>
#include "delete_duplicate.c"
#include "commision.c"
#include "add.c"
#include "GCD.c"
#include "UppLow.c"
int menu();
void exit_menu();
void selection();

void main() {	
    selection();
    getch();	
}

void selection() {
    //Selection Menu.
	switch(menu()) {
		case 1 : delete_duplicate(a); 
                 selection();
		         break;
		case 2 : commision();
                 selection();
                 break;
        case 3 : add();
                 selection();
                 break;  
        case 4 : GCD();
                 selection();
                 break;
        case 5 : UppLow();
                 selection();
                 break;
        case 6 : exit_menu();
                 break;
        default: printf("\n Wrong Input");
                 break;
	}
}

int menu() {
    int pro = 0;
    printf("\n Welcome User \n");
    getch();
	printf("\n Let's select the function you wish to perform :\n");
	printf("\n1 : Delete Duplicate\n");
	printf("\n2 : Calculate commision\n");
	printf("\n3 : Add Elements of an Array\n");
	printf("\n4 : Calculate Greatest Common\n");
	printf("\n5 : To Convert Upper to Lower Case\n");
    printf("\n6 : Exit\n");
	printf("\n Please enter the Code Number of Your Choice (1,2,3,4,5,6) :  ");
	scanf("%d",&pro);
    return pro;
}

void exit_menu() {
    char dis='\0';
    printf("\n Do you wish to exit(y/n) : ");
    dis = getch();
    if(dis!='y') {
        selection();
    }
}
