#include "Console_Menu.h"
#include "Integer_Count.h"

class Count_Console_Menu : public Console_Menu {

    public:
        // Constructors/destructors
        Count_Console_Menu() { }
        ~Count_Console_Menu() { }

        // Implementors
        void execute_selection();
        void make_items(Integer_Count& new_count);

        // Accessors
        Integer_Count& get_count() { return *count; }
        void set_count (Integer_Count& new_count) { count = &new_count; }

    private:

        // Data memmbers
        Integer_Count* count;
};