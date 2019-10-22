#include <iostream>
#include "Integer_Count.h"
#include "Console_Menu.h"

using namespace std;

int main() {
    cout << endl << "CONSOLE Menu" << endl;

    int selection;
    Console_Menu menu;

    menu.add_item("Increment");
    menu.add_item("Decrement");
    menu.add_item("Reset");

    menu.add_terminator("Quit");

    menu.add_prompt("Make a selection ");

    selection = menu.get_user_selection();
    while (selection != 0)
    {
        selection = menu.get_user_selection();
    }

    cout << endl << "Happy trails." << endl;

    return 0;
}

int mainIntegerCount() {

    // Create an integer count object with an initial value of 5.
    Integer_Count intcount(5);

    // Get its value. And display it.
    cout << endl << "INTEGER demo" << endl << endl;
    cout << "Current value: " << intcount.get_value() << endl;

    // Tell it to increment itself twice.
    intcount.increment();
    intcount.increment();

    cout << "Current value: " << intcount.get_value() << endl;

    // Tell it to decrement itself three times.
    intcount.decrement();
    intcount.decrement();
    intcount.decrement();

    cout << "Current value: " << intcount.get_value() << endl;

    // Tell it to reset itself.
    intcount.reset();

    cout << "Current value: " << intcount.get_value() << endl;
    char* pippo = intcount.asBase(2);
    cout << "Current value: " << pippo << endl;
    cout << pippo;
    cout << endl << "Happy trails." << endl;

    return 0;
}