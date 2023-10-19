#include <iostream>


using namespace std;

class Calculator {
public:
    static int sum(int a, int b) {
        return a + b;
    }
};

class Number {


};
class Phone {
public:
    int phoneNum;
    int tellTime;
    int date;

    Phone(int d, int p, int t) {
        date = d;
        phoneNum = p;
        t = tellTime;
    }

    ~Phone() {
        std::cout << "I've killed";
    }
};
int main()
{
    Phone* phone = new Phone(5, 6, 7);  // вызов конструктора
    numberphoneNum = "+7-911-182-94-14" ;
    phone -> phoneNum = 9;
    person.date = "18.12.2023";
    person.telltime = 10;
    //pro getteri b setteri im ne pomnu

};
//int main() {
//    phone *ob1 = public;
//};