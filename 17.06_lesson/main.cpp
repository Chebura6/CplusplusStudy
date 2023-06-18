#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//int test(int a, int b) {
//    return a + b;
//}
//
//int F(int n) {
//    if (n == 1 || n == 2 || n == 3) {
//        return 1;
//    }
//
//    else if (n > 3) {
//        return F(n - 3) + F(n - 2);
//    }
//}

bool triangleTest(int a, int b, int c) {
    if ((a * a) == (b * b + c * c)) {
        return true;
    } else if ((b * b) == (a * a + c * c)) {
        return true;
    } else if ((c * c) == (a * a) + (b * b)) {
        return true;
    }
    return false;
}

class Wheel {
public:
    float diameter;
    Wheel(float diameter_) {
        diameter = diameter_;
    }

    Wheel() {}
};

class Engine {
public:
    int horsePower;

    Engine(int horsePower_) {
        horsePower = horsePower_;
    }

    Engine() {}

};

class Car {
public:
    Wheel wheel;
    Engine engine;

    Car(Wheel wheel, Engine engine) {
        wheel = wheel;
        engine = engine;
    }

    void go() {
        cout << "I am going!";
    }

    void getInfo() {
        cout << "My horsepower is: " << engine.horsePower<< endl;
        cout << "My wheel diameter is: " << wheel.diameter << endl;
    }
};


int main() {

//    ifstream fin("/Users/artemparfenov/CLionProjects/С++_study/37368.txt");
//    ofstream fout("/Users/artemparfenov/CLionProjects/С++_study/output.txt");
//
//    vector<int> inputVector;
//    int temp, countOfPairs = 0, maxSum = 0;
//
//    while (fin >> temp) {
//        inputVector.push_back(temp);
//    }
//    cout << test(4, 9);
//
//    for (int i = 0; i < inputVector.size() - 1; ++i) {
//        for (int j = i + 1; j < inputVector.size(); ++j) {
//            if (((inputVector[i] + inputVector[j]) % 60 == 0) && (inputVector[i] % 40 == 0 || inputVector[j] % 40 == 0)) {
//                countOfPairs += 1;
//                maxSum = max(inputVector[i] + inputVector[j], maxSum);
//            }
//        }
//    }
//
//    cout << countOfPairs << endl << maxSum;

//    cout << F(12);


//    ifstream fin("/Users/artemparfenov/CLionProjects/С++_study/39764.txt");
//    ofstream fout("/Users/artemparfenov/CLionProjects/С++_study/output.txt");
//
//    vector<int> inputVector;
//    int temp, counter = 0, maxSum = 0;
//
//    while (fin >> temp) {
//        inputVector.push_back(temp);
//    }
//
//    for (int i = 0; i < inputVector.size() - 2; ++i) {
//        if (triangleTest(inputVector[i], inputVector[i + 1], inputVector[i + 2])) {
//            counter += 1;
//            maxSum = max(inputVector[i] + inputVector[i + 1] + inputVector[i + 2], maxSum);
//        }
//    }
//    cout << counter << endl << maxSum;

    Wheel wheel(20);
    Engine engine(320);

    Car car(wheel, engine);
    car.getInfo();
    car.go();
    return 0;
}