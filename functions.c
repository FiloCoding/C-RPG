#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <windows.h>
#include "functions.h"

void create_player(player* user) 
{
    printf("Inserisci il tuo nome: ");
    scanf("%19s", user->name);
    printf("Il nome %s %c corretto? \n", user->name, 138);
    Sleep(2000);
}