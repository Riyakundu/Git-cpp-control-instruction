#include <iostream>
using namespace std;
class triangle
{
private:
    float a, b, c;

public:
    void angle();
};
void triangle::angle()
{
    cout << "Enter the first angle of triangle: " << endl;
    cin >> a;
    cout << "Enter the second angle of triangle: " << endl;
    cin >> b;
    cout << "Enter the third angle of triangle: " << endl;
    cin >> c;
    if ((a + b + c) == 180.0)
        cout << "The triangle is valid." << endl;
    else
        cout << "The triangle is not valid." << endl;
}
int main()
{
    triangle tr;
    tr.angle();
    return 0;
}