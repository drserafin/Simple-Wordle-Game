#include <iostream>

class MyClass {
private:
    int x;
public:
    void setX(int x) {
        this->x = x; // 'this->' is used to refer to the member variable x
    }

    int getX() {
        return this->x; // 'this->' is used to refer to the member variable x
    }
};

int main() {
    MyClass obj;
    int x = 10; // local variable with the same name as the member variable
    obj.setX(5); // Call the member function setX to set the value of x to 5
    std::cout << "Value of x (member variable): " << obj.getX() << std::endl; // Call the member function getX to get the value of x
    std::cout << "Value of x (local variable): " << x << std::endl; // Print the value of the local variable x
    return 0;
}
