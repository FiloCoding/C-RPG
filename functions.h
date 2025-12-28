#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct 
{
    char name[20];

    short int reputation;
    short int money;
    short int life;

    short int interactions;
    
} player;

player user;

void create_player(player* user);



#endif