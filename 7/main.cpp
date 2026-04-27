#include <iostream>
#include "human.h"
using namespace std;

int main() {
    Human *hw;
    hw = new Human("Geunho Park");
    hw->print();
    hw->setAge(24);
    hw->print();
}
