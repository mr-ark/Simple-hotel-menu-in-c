#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int choice;
	printf("Hai sir, how do yo do \nplease select your order:\n1.porotta \n2.biriyani \n3.fried rice \n4.mandhi \n5.shawarma \nmy order: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you've selected porotta, Thank you sir");
        break;
        case 2:
        printf("ok sir,your biriyani is on the way");
        break;
        case 3:
        printf("ooh i see i'm bringing your fried rice ");
        break;
        case 4:
        printf("mandhi, please wait a minute sir");
        break;
        case 5:
        printf("You shawarma is making pls wait few minutes");
        default:
        printf("No sir that is not available here");
    }
	return EXIT_SUCCESS;
}
