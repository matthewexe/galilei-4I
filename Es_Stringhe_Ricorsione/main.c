#include <stdio.h>

void stampa(char* s); // char[]

/*
    command:    ./main pippo pluto
    argv:
    x    0 1 2 3 4 5 6 7 8
    0    . / m a i n \0
    1    p i p p o \0
    2    p l u t o \0

*/


int main(int argc, char** argv) { // char[][]
    int i;

    printf("%d\n", argc);

    for(i=0; i<argc; i++){
        stampa(*(argv+i)); // argv[i]

        printf("\n");
    }
}

void stampa(char* s){
    while(*s!='\0'){
        printf("%c", *s);
        s++;
    }
}