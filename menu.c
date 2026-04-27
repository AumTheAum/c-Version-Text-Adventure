#include <stdio.h>
#include "menu.h"

void show_menu(){
	static int first_time = 1;
	static int rest_time = 0;

	if(first_time){
		printf("\n---MENU---\n");
		printf("1) Start\n");
		printf("2) Load\n");
		printf("3) Quit\n");
		first_time = 0;
		rest_time = 1;
	} else if(rest_time){
		printf("\n---OPTIONS---\n");
		printf("1) Move Onwards\n");
		printf("2) Look Around\n");
		printf("3) Go Back\n");
	}
}
