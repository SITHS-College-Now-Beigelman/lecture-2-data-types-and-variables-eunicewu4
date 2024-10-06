// Eunice Wu
// Lecture 2
// September 16, 2024

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Part 1: assigned and declared variables
    int intt = 2;
    float floatt = 3.5;
    double doublee = 3.9;
    char charr = 's';
    bool booll = true;
    string stringg = "hello";
    
    // Part 2: output variables and assigned value
    cout << "int: " << intt << "\n";
    cout << "float: " << floatt << "\n";
    cout << "double: " << doublee << "\n";
    cout << "char: " << charr << "\n";
    cout << "bool: " << booll << "\n";
    cout << "string: " << stringg << "\n";
    cout << "\n";

    // Part 3: slide 37
    int inches;
    inches = 100;

    cout << inches << " inch (es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;
    cout << "\n";
 
    // Part 4: compared the ASCII values of two letters
    char char1 = 'a';
    char char2 = 'z';
    cout << "a > z = " << (char1>char2) << "\n";
    cout << "\n";

    // Part 5: started and performed operations 
    cout << "2 + 3.5 = " << 2 + 3.5 << "\n";
    cout << "6 / 4 + 3.9 = " << (6.0/4.0) + 3.9 << "\n";
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << "\n";

    return 0;
}
/*int: 2
float: 3.5
double: 3.9
char: s
bool: 1
string: hello

100 inch (es) = 8 feet (foot) and 4 inch(es)

a > z = 0

2 + 3.5 = 5.5
6 / 4 + 3.9 = 5.4
5.4 * 2 - (13.6 + 18 / 2) = -11.8
*/