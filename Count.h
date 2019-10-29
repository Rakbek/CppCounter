#ifndef COUNT_H
#define COUNT_H

template<class Count_Type>
class Count {
    public:

        // Constructors/destructor
        Count() {}
        virtual ~Count() {}

        // Implementors
        virtual void increment() = 0;
        virtual void decrement() = 0;
        void reset() { value = reset_value; }

        // Accessor
        Count_Type get_value() { return value; }
        void set_value(Count_Type new_value) { value = new_value; }

        Count_Type get_reset_value() { return reset_value; }
        void set_reset_value(Count_Type new_value) { reset_value = new_value; }

    protected:
        
        // Data members
        Count_Type value;
        Count_Type reset_value;
};

#endif