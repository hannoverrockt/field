#ifndef FIELD_WORKS_H_INCLUDED
#define FIELD_WORKS_H_INCLUDED



/*******************Declarations*****************************/

struct arrow_position
{
    uint16_t x;
    uint16_t y;
};

/*******************Function_Prototypes**********************/
void init_field(uint8_t *field , int number_of_elements);
void init_last_changed_position(struct arrow_position point);
update_field( uint8_t *field , int number_of_elements, int elements_of_a_row );

#endif // FIELD_WORKS_H_INCLUDED
