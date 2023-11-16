#include <iostream>

#include "b.h"
#include "a.h"

void testFromB() {
    std::cout << "Test function from library B calling function from library A:\n";
    test();  // Using the function from library A
}