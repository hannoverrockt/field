#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include "observer.h"
#include "field_works.h"





int main()
{
/***************** GLOBAL VARIABLES **********************/
    uint8_t field[10][10];
    struct arrow_position last_changed_position;

/***************** PROGRAMM CODE *************************/
/***************** INIT PHASE ****************************/
    printf("Field(s) starting screen!\n");
    printf("Press enter to continue.\n");
    getchar();

    init_field( field , sizeof(field));
    init_last_changed_position(last_changed_position);


/***************** PROGRAM PHASE**************************/
    clear_screen();
    print_fields( field , sizeof(field) , sizeof(field[0]) );

    // Programm the loop with all the changes over time
    uint32_t iterations;
    for(iterations = 0; iterations < 100; iterations++)
    {
        clear_screen();
        printf("Iterationcounter: %d\n", iterations);
        update_field( field , sizeof(field) , sizeof(field[0]), last_changed_position);
        print_fields( field , sizeof(field) , sizeof(field[0]) );
        usleep(50000); // calculated everything with 20 Hz
    }

    return 0;
}
