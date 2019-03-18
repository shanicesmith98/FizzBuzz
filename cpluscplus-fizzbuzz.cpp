#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++) {

        // i (num) divisible by 3 and 5 will 
        // print 'FizzBuzz' in place of num 
        if (i % 15  == 0) {
            cout << "FizzBuzz" << endl;
        }
        
        // i (num) divisible by 3 will print
        // 'Fizz' in place of num 
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        
        // i (num) divisible by 5 will print
        // 'Buzz' in place of num     
        else if (i % 5  == 0) {
            cout << "Buzz" << endl;
        }

        // i (num) not divisible by 3
        // or 5 will print the num 
        else {
            cout << i << endl;
        }
    }
}
