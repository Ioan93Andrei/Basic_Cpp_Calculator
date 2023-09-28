#include <iostream>
#include <string>

int addition(int x, int y) {
    return x + y;
}

int substraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

void display_options_list() {
    std::string options[] = { "1. Addition", "2. Substraction", "3. Multiplication", "4. Division" };

    for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++) {
        std::cout << options[i] << std::endl;
    }
}

int main()
{
    int x;
    int y;
    int answer;

    std::cout << "Please insert the first number: ";
    std::cin >> x; 

    std::cout << "Please insert the second number: ";
    std::cin >> y;

    std::cout << "Your numbers are " << x << " and " << y << std::endl;

    std::cout << "Please select an operation to perform: " << std::endl;
    display_options_list();
    std::cout << "Chose your option from 1 to 4." << std::endl;
    std::cin >> answer;

    switch (answer)
    {
    case 1:
        std::cout << "The sum of the numbers is " << addition(x, y) << std::endl;
        break;
    case 2: 
        std::cout << "The result of substration of the numbers is " << substraction(x, y) << std::endl;
        break;
    case 3: 
        std::cout << "The sum of the multiplication of the numbers is " << multiplication(x, y) << std::endl;
        break;
    case 4:
        std::cout << "The result of the division of the numbers is " << division(x, y) << std::endl;
        break;
    default:
        break;
    }

    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();

}

