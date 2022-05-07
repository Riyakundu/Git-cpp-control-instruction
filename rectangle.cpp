#include <iostream>
using namespace std;
class rectangle
{
private:
    float len, br;

public:
    void rec();
};
void rectangle::rec()
{
    cout << "Enter the length and breadth of a rectangle: " << endl;
    cin >> len >> br;
    float area = 2 * len * br;
    float peri = 2 * (len + br);
    if (area > peri)
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    else
        cout << "The area of the rectangle is not greater than its perimeter." << endl;
}
int main()
{
    rectangle r;
    r.rec();
    return 0;
}