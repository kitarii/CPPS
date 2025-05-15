#include <iostream>

//* A constructor function is a special method inside a class that is automatically 
//* called whenever you create a new object of the class.

// class Class 
// {
//   public:
//     Class()       // Constructor
//     {     
//       std::cout << "Hello World!" << '\n';
//     }
// };

// int main() 
// {
//   Class Obj;      // Create an object of Class, this will automatically call the constructor
//   return 0;
// }

class Car
{
    public:
        Car(); // Constructor declaration
        Car(std::string pbrand, std::string pmodel, int pyear); // second constructor
        std::string brand;
        std::string model;
        int year;
};

Car::Car(void)
{
    std::cout << "Hello world !" << std::endl;
    brand = "";
    model = "";
    year= 0;
    return ;
}

Car::Car(std::string pbrand, std::string pmodel, int pyear)
{
    brand = pbrand;
    model = pmodel;
    year = pyear;
    return ;
}

int main() 
{
  // Create Car objects and call the constructor with different values
  Car car1;
  Car car2("Ford", "Mustang", 1969);

  // Print values
  std::cout << car1.brand << " " << car1.model << " " << car1.year << std::endl;
  std::cout << car2.brand << " " << car2.model << " " << car2.year << std::endl;
  return 0;
}