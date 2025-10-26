#include <iostream>
#include <string>

int main() {
    std::string n, t; int e, x, r; 
    std::cout << "Enter ID, Type, Entry Hr, Exit Hr: ";
    std::cin >> n >> t >> e >> x;

    if (t == "Bus") r = 5;
    else if (t == "Car") r = 2; 
    else if (t == "StaffCar") r = 1;
    else r = 0;

    int h = x - e; 
    if (h < 1) h = 1;
    
    std::cout << "Fee for " << n << " (" << t << "): $" << (h * r) << std::endl;
    return 0;
}