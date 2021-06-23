#include <iostream>

void action(int x, int y, char operation) {
    switch (operation) {
        case '+':
            std::cout << "Sum of the numbers: " << x + y << std::endl;
            break;
        case '-':
            std::cout << "Subtraction of the numbers: " << x - y << std::endl;
            break;
        case '/':
            std::cout << "Division of the numbers: " << x / y << std::endl;
            break;
        default:
            std::cout << "Unknown operation" << std::endl;
            break;        
    }
}

int main() {
    int x, y;
    char operation;
    
    std::cout << "Enter first number: ";
    std::cin >> x;
    
    std::cout << "Enter second number: ";
    std::cin >> y;
    
    std::cout << "Choose operation: ";
    std::cin >> operation;
    
    action(x, y, operation); 
    
    return 0;
}
