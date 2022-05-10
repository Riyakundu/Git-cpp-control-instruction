#include <iostream>
using namespace std;
class leap
{
private:
    int year;

public:
    void leap_year();
};
void leap::leap_year()
{
    cout << "Enter any year: " << endl;
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            cout << "Year " << year << " is leap year." << endl;
        else
            cout << "Year " << year << " is not leap year." << endl;
    }
    else
    {
        if (year % 4 == 0)
            cout << "Year " << year << " is leap year." << endl;
        else
            cout << "Year " << year << " is not leap year." << endl;
    }
}
int main()
{
    leap ly;
    ly.leap_year();
    return 0;
}