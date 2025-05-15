// ******************Member functions******************//
// Member functions must be declared inside the class type definition, 
// and can be defined inside or outside of the class type definition. 

#include <iostream>

class Date
{
    public:                 //access specifier
        int year {};
        int month {};
        int day {};

        void print()        // defining a member function named print
        {
            std::cout << year << '/' << month << '/' << day << '\n';
        }
};

int main()
{
    Date today{2025, 5, 15};
    today.print();
    return 0;
}