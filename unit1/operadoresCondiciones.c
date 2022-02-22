#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones//
//frio: 16
//caliente:29
int frio= 16;
int caliente = 29; 
int sofa = 7000;



int main(int agrc, char** argv){
    int inputTemp = atoi (argv [1]);
    int inputMoney = atoi (argv[2]);
    char inputName = argv[3][0]; //--> "Female"---> {'F', 'e', 'm', 'a', 'l', 'e','\0'};
    int temp_condition = (inputTemp == frio);
    int temp_condition2 = (inputTemp == caliente);
    int temp_condition3 = (inputTemp >= caliente);
    int canRobotMove = (inputTemp <= caliente);
    int hasUserMoney = (inputMoney >= sofa);
    int isUserFemale = (inputName != 'F');


    if(canRobotMove)}
        //Robot.move(x_coord, y_coord);
    } else {
        //Robot.stop(x_coord, y_coord);
    }
    if(hasUserMoney){
    //Allows to buy
    }
    else{
    //rejected product
}

    return 0;
}