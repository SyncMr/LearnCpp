// g++ -std=c++11 A2DD_main.cpp A2DD.cpp

#include <iostream>
#include "A2DD.h"
using namespace std;

int main() {
    A2DD obj(5, 6);
    cout << obj.getSum() << endl;
    return 0;
}
