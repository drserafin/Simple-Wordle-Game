#include <iostream>

class Wheel {

public:
    void rotate(){
        std::cout << "Wheel rotating" << std::endl;
    }
};

class Car {
    private:
    Wheel frontLeft; //we are using composition here, we are creating objects of class Wheel inside class Car
    Wheel frontRight;
    Wheel rearLeft;
    Wheel rearRight;

    public:
      void drive(){
        std::cout << "Car driving" << std::endl;
        frontleft.rotate();
        std::cout << "Front left wheel rotating" << std::endl;
      }

      int main(){
        Car car;//now we are creating object of class Car which will create objects of class Wheel
        car.drive(); //this will call the drive function of class Car
        return 0;
      }