#include<iostream>

using namespace std;

class Car
{

    public :

    string carname;

    void printname()
    {
        cout << " The new car name is : " << carname; 
    }
};

int main(){

    Car car1;

    car1.carname = "Honda-CRV";

    car1.printname();

    return 0;
}