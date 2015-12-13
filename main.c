#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "observer.h"
#include "field_works.h"





int main()
{
/***************** GLOBAL VARIABLES **********************/
    uint8_t field[12][12];


/***************** PROGRAMM CODE *************************/
/***************** INIT PHASE ****************************/
    printf("Field(s) starting screen!\n");
    printf("Press enter to continue.\n");
    init_field( field , sizeof(field));

    getchar();
    clear_screen();
    print_fields( field , sizeof(field) , sizeof(field[0]) );

    return 0;
}
