const int MAX_CONSOLE_MENU_SIZE = 10;

class Console_Menu {
    public:

        //Constructor/destructors
        Console_Menu() { menu_size = 0; }
        ~Console_Menu() { }

        // Implementors
        void add_item(char* new_item);
        void add_terminator(char* quit_label);
        void add_prompt(char* menu_promprt);
        void display_menu();
        int get_user_selection();

        // Accessors
        int get_selection() { return selection; }

    protected:

        bool validate_selection(int selection);

        // Data members
        char* menu_items[MAX_CONSOLE_MENU_SIZE];
        char* prompt_string;
        int menu_size;
        int selection;
};