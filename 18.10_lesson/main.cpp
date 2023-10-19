#include <iostream>

int main() {
    int a = 20;
    int b = 10;
    char o = 12 + 8 - 9 * 6;
    long num = 123;
    bool good = false;
    bool bad {false};
    std::cout << good << std::endl;

    int* x = &a;
    int *v = &b;
    bool* pb = &good;
    char *z = &o;
    long *c = &num;
    int result = *x + *v;
    std::cout << result;
    //я не пон как это делать c bool
    return 0;
}
