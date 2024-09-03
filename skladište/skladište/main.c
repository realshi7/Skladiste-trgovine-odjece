#define _CRT_SECURE_NO_WARNINGS

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    inicijalizacija("skladiste.bin");

    int opcija = 1;

    while (opcija) {
        opcija = izbornik("skladiste.bin");
    }

    printf("Kraj programa\n");

    return 0;
}


//koncepti: 1,2,3,4,5,6,7,8,9,10,11,12-valjda sve,13,14-mozda je,15,16-valjd valja,17 - provjera pokazivaca i zatvaranje datoteke -> valjd valja,18,19,20,21,22,23,24 valjd