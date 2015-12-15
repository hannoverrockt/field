/********************************************************************************************
*
*   Contains all functions that are necessary for the field work
*
*   Function:
*       init_field
*       init_last_changed_position
*       update_field
*
*********************************************************************************************/
#include <stdint.h>
#include <stdio.h>

#include "field_works.h"

void init_field(uint8_t *field , int number_of_elements)
{
    int index;
    for(index = 0; index < number_of_elements; index++)
    {
        *field = rand() % 4;
        field++;
    }
}


void init_last_changed_position(struct arrow_position point)
{
    //TODO: init the last position pointer
}



void update_field( uint8_t *field , int number_of_elements, int elements_of_a_row, struct arrow_position last_position)
{
    //TODO: Algorithm the change the field
}
