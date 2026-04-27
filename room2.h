#ifndef ROOM2_H
#define ROOM2_H

typedef struct{
	int visited;
} Room;

void initRoom(Room *room);
void enter_room(Room *room);

#endif
