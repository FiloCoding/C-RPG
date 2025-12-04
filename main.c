#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include "functions.h"

typedef struct 
{
    short int id_class;
    short int id_subclass;

    char name[20];
    short int level;
    long int experience;

    short int is_live; // 1 if alive, 0 if dead
    short int is_in_battle; // 1 if in battle, 0 if not

    short int physical_defense;
    short int magical_defense;
    short int magical_attack;
    short int physical_attack;

    short int health_points;
    short int mana_points;
    short int stamina;
    short int faith;
    short int honor;
    short int rupies;

    short int strength;
    short int agility;
    short int intelligence;
    short int luck;
    short int charisma;
    short int dexterity;

} Character;

void main() 
{
    Character player;

    
    
}