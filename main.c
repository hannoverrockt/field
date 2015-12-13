#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "observer.h"






int main()
{
/***************** GLOBAL VARIABLES **********************/
    uint8_t field[11][11];


/***************** PROGRAMM CODE *************************/

    printf("Field(s) starting screen!\n");

    printf("Size of the array: %d\n", sizeof(field));
    printf("Size of the arrayelement_1: %d\n", sizeof(field[0]));
    printf("\n\n");
    init_field(field , sizeof(field));

    print_fields( field , sizeof(field) , sizeof(field[0]) );

    return 0;
}
