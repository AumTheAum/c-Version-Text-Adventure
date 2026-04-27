#include <stdio.h>
#include "save.h"

void save_game(Room *room){
	FILE *file = fopen("save.txt", "w");

	if (file == NULL){
		printf("can't save :(\n");
		return;
	}

	fprintf(file, "%s\n%s\n%d\n", room->name, room->description, room->visited);

	fclose(file);
	printf("Game Saved!\n");
}

void load_game(Room *room){
	FILE *file = fopen("save.txt", "r");

	if (file == NULL){
		printf("no save :(");
		return;
	}

	fscanf(file, "%49[^\n]\n", room->name);
	fscanf(file, "%199[^\n]\n", room->description);
	fscanf(file, "%d", &room->visited);

	fclose(file);
	printf("Loaded!\n");
}

