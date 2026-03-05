#include <iostream>

int main() {
    float radius, area;
    const float PI = 3.14159; // Define a constant value for PI
    
    std::cout << "Enter radius: ";
    std::cin >> radius; // Get radius from user
    
    // Formula: Area = p * r^2
    area = PI * radius * radius;
    
    std::cout << "Area: " << area;
    return 0;
}
