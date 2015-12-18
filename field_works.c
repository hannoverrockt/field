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
#include <time.h>

#include "field_works.h"

void init_field(uint8_t *field , int number_of_elements)
{
    int index;
    for(index = 0; index < number_of_elements; index++)
    {
        int time_point;
        time_point = rand(NULL);
        *field = rand(time(NULL)) % 4;
        field++;
    }
}


void init_last_changed_position(uint8_t *field , int number_of_elements, int elements_of_a_row, struct arrow_position* point )
{
    // The  field has the dimension of [elements_of_row][number_of_elements / elements_of_a_row]

    point->x = rand(time(NULL)) % elements_of_a_row;
    point->y = rand(time(NULL)) % (number_of_elements /elements_of_a_row);
}



void update_field( uint8_t *field , int number_of_elements, int elements_of_a_row, struct arrow_position* last_position)
{
    //TODO: Algorithm the change the field
    // Here it is just a test.
    *(field + ((elements_of_a_row * last_position->y) + last_position->x)) = rand(time(NULL)) % 4;
}
