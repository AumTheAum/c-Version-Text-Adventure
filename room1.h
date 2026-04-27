#ifndef ROOM1_H
#define ROOM1_H

typedef struct{
	int visited;
} Room;

void initRoom(Room *room);
void enter_room(Room *room);

#endif
