#include <iostream>

class Equation {
    public:

    void setSquared(double x) {
        this->squared = x * x;
    }

    double getSquared() {
        return squared;
    }
        
    private:

    double squared;

};



int main() {

    int input;
        int selection;
        Equation squaredValue;

       std::cout << "What equation would you like to user? (1) Squared (2) Cubed (3) Square Root (4) Cube Root: " << std::endl;
       std::cin >> selection;
   
   if (selection ==1 ) {
       std::cout << "Enter a number to be squared: ";
       std::cin >> input;
       squaredValue.setSquared(input);
       std::cout << "The squared value is: " << squaredValue.getSquared() << std::endl;
   }



    return 0;
}