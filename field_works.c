/********************************************************************************************
*
*   Contains all functions that are necessary for the field work
*
*   Function:
*       print_field()
*
*********************************************************************************************/

#include <stdint.h>

void init_field(uint8_t *field,int number_of_elements)
{
    int index;
    for(index = 0; index < number_of_elements; index++)
    {
        *field = index;
        field++;
    }
}
