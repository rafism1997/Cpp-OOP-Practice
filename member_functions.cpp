// To access a member function outside the class definition we have to use the scope resolution  ::operator along with the class name and the function name

#include<iostream>

using namespace std;

class Car
{

    public:

    string carname;

    string variant;

    void printname();

    void printvariant()
    {
        cout << " Variant of the car : " << variant; 
    }
};
void Car::printname()
{
    cout << "The new car name is : "<< carname;
}

int main(){

    Car car1;

    car1.carname = "Honda-CRV";
    car1.variant = "Petrol˜";

    car1.printname();
    cout << endl;

    car1.printvariant();

    return 0;
}


// C++ program to demonstrate function
// declaration outside class
 
// #include<iostream>
// using namespace std;
// class Geeks
// {
//     public:
//     string geekname;
//     int id;
     
//     // printname is not defined inside class definition
//     void printname();
     
//     // printid is defined inside class definition
//     void printid()
//     {
//         cout << "Geek id is: " << id;
//     }
// };
 
// // Definition of printname using scope resolution operator ::
// void Geeks::printname()
// {
//     cout << "Geekname is: " << geekname;
// }
// int main() {
     
//     Geeks obj1;
//     obj1.geekname = "xyz";
//     obj1.id=15;
     
//     // call printname()
//     obj1.printname();
//     cout << endl;
     
//     // call printid()
//     obj1.printid();
//     return 0;
// }