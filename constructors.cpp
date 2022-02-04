// Constructors are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition.
// There are 3 types of constructors:

// Default constructors
// Parameterized constructors
// Copy constructors

#include<iostream>

using namespace std;

class Car
{
    public :

    string variant;
    int edition;
    
    Car()
    {
        cout << "Default constructor called" << endl;
        variant="Petrol";
    }

    Car(int num)
    {
        cout << "Parameterized Constructor called"<<endl;
        edition=num;
    }

};
int main(){

    Car car1;
    cout << " Variant of the car: " << car1.variant<<endl;

    Car car2(2017);
    cout<< "The edition of the car: " << car2.edition<<endl;

    return 0;

}


// // C++ program to demonstrate constructors
 
// #include<iostream>
// using namespace std;
// class Geeks
// {
//     public:
//     int id;
     
//     //Default Constructor
//     Geeks()
//     {
//         cout << "Default Constructor called" << endl;
//         id=-1;
//     }
     
//     //Parameterized Constructor
//     Geeks(int x)
//     {
//         cout << "Parameterized Constructor called" << endl;
//         id=x;
//     }
// };
// int main() {
     
//     // obj1 will call Default Constructor
//     Geeks obj1;
//     cout << "Geek id is: " <<obj1.id << endl;
     
//     // obj1 will call Parameterized Constructor
//     Geeks obj2(21);
//     cout << "Geek id is: " <<obj2.id << endl;
//     return 0;
// }