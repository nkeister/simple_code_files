#include <iostream>

using namespace std;

/**********************************************************
 * 
 * wont compile
 * errors on lines with comments
 * 
 * Can compile if compute_area(double radius) inside class
 * Able to define variable if passed by function
 *
 ***********************************************************
*/

class Circle
{
    private:
        double radius;
    public:
        //double radius:
        double compute_area()
        {
            return 3.14*radius*radius;
        }
        /*
        double compute_area(double radius)
        {
            return 3.14*radius*radius;
        }
        */

};

int main()
{
    Circle object1;

    object1.radius = 2.5; // error: 'double Circle::radius' is private within this context

    cout << "radius = " << object1.radius << "\n"; //error: 'double Circle::radius' is private within this context
    cout << "area = " << object1.compute_area() << "\n";
    
    //cout << "area = " << object1.compute_area(2.5) << "\n";

    return 0;
}