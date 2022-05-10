#include <iostream>
using namespace std;
class gregorian
{
private:
    int y, by = 1900, ly, ry, td, d;

public:
    void calender();
};
void gregorian::calender()
{
    cout << "Enter the year: " << endl;
    cin >> y;
    y = (y - 1) - by;
    ly = y / 4;
    ry = y - ly;
    td = (ry * 365) + (ly * 366) + 1;
    d = td % 7;
    if (d == 0)
        cout << "Monday" << endl;
    else if (d == 1)
        cout << "Tuesday" << endl;
    else if (d == 2)
        cout << "Wednesday" << endl;
    else if (d == 3)
        cout << "Thursday" << endl;
    else if (d == 4)
        cout << "Friday" << endl;
    else if (d == 5)
        cout << "Saturday" << endl;
    else if (d == 6)
        cout << "Sunday" << endl;
    else
        cout << "Wrong Entry" << endl;
}
int main()
{
    gregorian g;
    g.calender();
    return 0;
}