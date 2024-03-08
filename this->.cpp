#include <iostream>

class MyClass {
private:
    int x;
public:
    void setX(int x) {
        this->x = x; // 'this' is used to refer to the member variable x
    }

    int getX() {
        return this->x; // 'this' is used to refer to the member variable x
    }
};

int main() {
    MyClass obj;
    obj.setX(5);
    std::cout << "Value of x: " << obj.getX() << std::endl;
    return 0;
}
