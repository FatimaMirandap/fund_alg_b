#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    if (argc <= 1) return 0;

    printf("program executed: %s, number of elements: %d\n", argv[0],(argc-1));
    printf("Hola %s %s %s, bienvenido!/n", argv[1], argv[2], argv[3]);
    return 0;
}