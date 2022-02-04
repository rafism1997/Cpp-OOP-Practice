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
