#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Console_Menu.h"

using namespace std;

void Console_Menu::add_item(char* new_item)
{
    // Add new_item to the menu.
    char* menu_item;
    char* item_string = new char[25];

    sprintf(item_string, "%i. %s", menu_size + 1, new_item);
    menu_item = new char[strlen(item_string) + 1];
    strcpy(menu_item, item_string);
    menu_items[menu_size++] = menu_item;
    delete[] item_string;
}

void Console_Menu::add_terminator(char* quit_label)
{
    this->add_item(quit_label);
}

void Console_Menu::add_prompt(char* new_prompt)
{
    prompt_string = new_prompt;
}

void Console_Menu::display_menu()
{
    cout << endl;
    for (int i = 0; i < menu_size; i++)
        cout << menu_items[i] << endl;
    cout << endl << prompt_string;
}

bool Console_Menu::validate_selection(int selection)
{
    if ((selection <= menu_size) && (selection > 0))
        return true;
    else
        return false;
}

int Console_Menu::get_user_selection()
{
    int choice, quit_choice = menu_size;
    char choice_char;
    bool valid_selection = false;

    while (!valid_selection)
    {
        this->display_menu();
        // Read the first character; ignore the rest.
        cin.get(choice_char);
        cin.ignore(100, '\n');
        // Convert the character to an integer.
        if (!isdigit(choice_char))
            choice = 0;
        else
            choice = atoi(&choice_char);
        // Check if the choice is valid.
        if (!this->validate_selection(choice))
            cout << "Invalid choice, try again." << endl;
        else
            valid_selection = true;
    }
    // Set the selection and return it.
    if (choice == quit_choice)
        selection = 0;
    else
        selection = choice;
    return selection;
}   