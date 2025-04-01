#include <iostream>
using namespace std;

class Factorial {
private:
    int number;
    long long fact;

public:
    // Constructor to calculate factorial
    Factorial(int num) {
        number = num;
        fact = 1;
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
    }

    // Function to display the factorial
    void display() {
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    Factorial f(num);
    f.display();
    
    return 0;
}

