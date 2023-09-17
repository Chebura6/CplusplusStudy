#include <iostream>
#include "string"

int mySum(int a, int b) {
    return a + b;
}


class Car {
    int horsePower = 0;
    std::string name;

public: Car(int horsePower_, std::string name_) {
        horsePower = horsePower_;
        name = name_;
    }

    void go() {
        std::cout << "BRBRBRBRBRBRBRBR";
    }
q
     std::string getName() {
        return name;
    }

    void setName(std::string name) {
        Car::name = name;
    }

    int getHorsePower() {
        return horsePower;
    }

    void setHorsePower(int horsePower) {
        Car::horsePower = horsePower;
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;

    int a = 34;
//    std::string s = "l";
//    char r = 9;

    int* pa = &a;
    int** ppa = 0;

    std::cout << a << std::endl;
    std::cout << pa << std::endl;

    int* array = new int[40];
    array[9] = 678;

    std::cout << array << std::endl;
    std::cout << array[9] << std::endl;
    std::cout << array[10] << std::endl;

    Car* mazda = new Car(450, "CX-5");
    Car mazda1 = *mazda;



    mazda -> go();
    mazda1.go();

    std::string name = mazda1.getName();
    int hp = mazda1.getHorsePower();

    std::string namename = mazda -> getName();
    int hphp = mazda -> getHorsePower();


    return 0;
}
