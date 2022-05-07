#include <iostream>
using namespace std;
class points
{
private:
    int x1, y1, x2, y2, x3, y3;

public:
    void check_points();
};
void points::check_points()
{
    cout << "Enter the values for x1 and y1: " << endl;
    cin >> x1 >> y1;
    cout << "Enter the values for x2 and y2: " << endl;
    cin >> x2 >> y2;
    cout << "Enter the values for x3 and y3: " << endl;
    cin >> x3 >> y3;
    float m = (y2 - y1) / (x2 - x1);
    float n = (y3 - y2) / (x3 - x2);
    if (m == n)
        cout << "All the three points fall on one straight line." << endl;
    else
        cout << "All the three points not fall on one straight line." << endl;
}
int main()
{
    points p;
    p.check_points();
    return 0;
}