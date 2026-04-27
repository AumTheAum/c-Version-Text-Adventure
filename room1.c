#include <stdio.h>
#include <string.h>
#include "room1.h"

void initRoom(Room *room)
	(*room).visited = 0;
}

void enter_room(Room *room){
	printf("You have entered the Arrival Shore.");

	if (!(*room).visited){
		printf("The sand under your feet sifts as your weight melts into it. The bag you've packed only carries small essentials for survival. You are not here for a fun vacation, you are here to survive. The footprints on the sand tells you that you are not the only one.");
		(*room).visited = 1;
	} else {
		printf("You've seen this place before!\n");
        printf("The sand under your feet sifts as your weight melts into it. The bag you've packed only carries small essentials for survival. You are not here for a fun vacation, you are here to survive. The footprints on the sand tells you that you are not the only one.");
	}
}


