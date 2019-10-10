#include "Count.h"

class Integer_Count : public Count<int> {
    
    public:

        // Constructors/destructors
        Integer_Count() { reset_value = 0; reset(); }
        Integer_Count(int new_value) { reset_value = 0; value = new_value; }
        ~Integer_Count() { }

        // Implementors
        void increment();
        void decrement();
        char* asBase(int number_base);
};