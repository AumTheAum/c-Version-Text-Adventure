#include <stdio.h>
#include <string.h>
#include "room2.h"

void initRoom(Room *room)
	(*room).visited = 0;

void enter_room(Room *room){
	printf("You have entered the Woods.");

	if (!(*room).visited){
		printf("Making your way further onto the island, you notice a wooded area right off the shore. You take a small desire path and trail through it. Up ahead, you notice a few others in a clearing. For now, you decide to ignore them. Formalities can wait until after you get situated.");
		(*room).visited = 1;
	} else {
		printf("You've seen this place before!\n");
       printf("Making your way further onto the island, you notice a wooded area right off the shore. You take a small desire path and trail through it. Up ahead, you notice a few others in a clearing. For now, you decide to ignore them. Formalities can wait until after you get situated.");
	}
}
