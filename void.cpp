#include<iostream>
class equations{
    public:

    void GetNumberSquared(int number){

        classnumber = this->number * this->number;
        std::cout << "The number squared is: " << classnumber << std::endl;
    }


    private:
    
    int classnumber;



};

int main() {
    equations squared;
    std::cout << "Enter a number: ";
    std::cin >> number;

    squared.GetNumberSquared(number);
    
    return 0;
}
```