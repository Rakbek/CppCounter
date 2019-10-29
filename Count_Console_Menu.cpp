#include "Count_Console_Menu.h"

void Count_Console_Menu::make_items(Integer_Count& new_count)
{
    this->add_item("Increment");
    this->add_item("Decrement");
    this->add_item("Reset");
    count = &new_count;
}

void Count_Console_Menu::execute_selection()
{
    switch (selection)
    {
        case 1:
            count->increment();
            break;

        case 2:
            count->decrement();
            break;

        case 3:
            count->reset();
            break;
        
        default:
            break;
    }
}