#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

    if (argc <= 1){
        prinf("U need to enter arguments e.g. %s argv1, argv2 ... .\n", argv[0]);
        return 0;
    }

    if (argc < 5){
        prinf("U need to enter 4 elements when you run the code .\n");
        return 0;
    }

    printf("program executed: %s, number of elements: %d\n", argv[0],(argc-1));
    printf("Hola %s %s %s, bienvenido!/n", argv[1], argv[2], argv[3], argv[4]);
    return 0;
}