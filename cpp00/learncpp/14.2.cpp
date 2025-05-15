// ******************The class invariant problem = keeping objects in a valid state ******************//

#include <iostream>

struct Pair
{
    int first {};
    int second {};
};

struct Fraction
{
    int bast { 0 };  // Numerator, default value is 0
    int maqam { 1 }; // Denominator, default is 1
                     // Invariant: maqam should never be 0
};

void printFractionValue(const Fraction f)
{
    std::cout << f.bast / f.maqam << '\n';
}

int main()
{
    // Fraction f;
    Fraction f {5, 0};  // Create a Fraction with bast = 5, maqam = 0
                        //! 🚨 This will cause a crash or undefined behavior (division by zero)
    printFractionValue(f); 

    return 0;
}


/*
🧱 What’s the “class invariant problem”?
In programming, especially with structs or classes, we often want to make sure that an object always stays in a valid state.
This means certain conditions (called invariants) must always be true.

For example:
If you have a BankAccount, the balance should never be negative. That’s an invariant.

💥 The problem with structs in C:
In C, structs don’t really help you enforce rules like this. Anyone can set the balance to -500 and the compiler won’t complain.

That’s risky because:

It can break your program later.

It’s hard to track down bugs.

Your object is now in an invalid state.

✅ C++ and OOP help fix this
In C++, you can use classes with private variables and public functions that check and control what values are allowed. This helps protect the object and keep it always valid.

🧠 Summary
A class invariant is a rule that keeps an object in a valid state.
In C, structs can’t enforce these rules well.
C++ (with OOP) allows better control to protect and maintain the correctness of objects.
*/
