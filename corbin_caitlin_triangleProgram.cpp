/* Program name: Triangles
*  Author: Caitlin J. Corbin
*  Date last updated: Feb. 2, 2020
* Purpose: Just some triangle stuff
*/
#include <iostream>
#include <cmath>

using namespace std; //standard beginning stuff

int main() //first function
{
    double a; //variables for the users triangle inputs
    double b;
    double c;

    cout << "Hello user! \n"; //this section explains to the user what the program does
    cout << "This program will figure out if you are inputting a triangle";
    cout << " where two sides are bigger in length than the third. \n";
    cout << "It will then determine if it's a right triangle. \n";
    cout << "So to begin, please enter the following side lengths (Remember, positive integers only.) \n";

    cout << "Side length of a? \n"; //prompt for triangle side lengths
    cin >> a;
    cout << "Side length b? \n";
    cin >> b;
    cout << "Side length c? \n";
    cin >> c;

        if(a + b > c || a + c > b || b + c > a){ //this is a calculation to determine if the inputs are for a triangle
            cout << "Confirmed triangle,"; //confirms it's a triangle
        }
            else{
                cout << "Not a triangle,"; //tells user this is not a triangle
            }

    cout << " and "; // connects the output statements

        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){ //determines if the inputs form a right triangle
            cout << "this is a right triangle."; //confirms triangle is right
        }
            else {
                cout << "this is not a right triangle."; //tells the user the triangle is not right
            }


    return 0; //end
}
