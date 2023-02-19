#include <iostream>

using namespace std;

/*************************************************
 * 
 * intro to classes
 * intro to access modifiers
 * 
*************************************************
*/

class Circle
{
    public:
        double radius;

        double compute_area()
        {
            return 3.14*radius*radius;
        }

};

int main()
{
    Circle object1;

    object1.radius = 2.5;

    cout << "radius = " << object1.radius << "\n";
    cout << "area = " << object1.compute_area() << "\n";

    return 0;
}