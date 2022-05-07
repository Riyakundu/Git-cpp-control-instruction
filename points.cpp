#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    void point_analys();
};
void point::point_analys()
{
    cout << "Enter the value for point x: " << endl;
    cin >> x;
    cout << "Enter the value for point y: " << endl;
    cin >> y;
    if (x == 0 && y == 0)
        cout << "Point lies on the origin.";
    else
    {
        if (x != 0 && y == 0)
            cout << "Point lies on the X axis.";
        else if (y != 0 && x == 0)
            cout << "Point lies on the Y axis.";
        else
            cout << "Point lies neither on X axis nor on Y axis.";
    }
}
int main()
{
    point p;
    p.point_analys();
    return 0;
}