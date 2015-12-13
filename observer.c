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


void print_fields( uint8_t *field , int number_of_elements, int elements_of_a_row )
{

    int index;
    int jdex;


    for( index = 0; index < (number_of_elements / elements_of_a_row); index++){
        for( jdex = 0; jdex < (number_of_elements / elements_of_a_row); jdex++){
            printf( " %d  ", *field);
            field++;
            }
    printf( "\n\n" );
    }

}


void clear_screen(void)
{
    // fill with a function to clear the screen
}
