/********************************************************************************************
*
*   Contains all functions that are necessary to observe the evolution of the field
*
*   Function:
*       print_field()
*
*********************************************************************************************/
#include <stdint.h>
#include <stdio.h>

void print_fields( uint8_t *feld , int number_of_elements, int elements_of_a_row )
{

    int index;
    int jdex;


    for( index = 0; index < (number_of_elements / elements_of_a_row); index++){
        for( jdex = 0; jdex < (number_of_elements / elements_of_a_row); jdex++){
            printf( " %d ", *feld);
            feld++;
            }
    printf( "\n" );
    }

}
