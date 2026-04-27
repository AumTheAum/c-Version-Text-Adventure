#include <stdio.h>
#include "menu.h"
#include "room1.h"

int main(){
	int choice;
	Room room1;

	while(first_time = 1){
		show_menu();
		printf("What will you do? --> ");
		scanf("%d", &choice);

		if(choice == 1){
			enter_room(&room1);
		/*} else if (choice == 2){
			load_game(&room1);*/
		} else if (choice == 3){
			break;
		}
	}

	while(rest_time = 1){
		show_menu();
		printf("What will you do? --> ");
		scanf("%d", &choice);

		if (choice == 1){
			enter_room(&room2);
		} else if (choice == 2){
			

		}
		}

	}

	return 0;
}


