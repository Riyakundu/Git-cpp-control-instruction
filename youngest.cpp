#include <iostream>
using namespace std;
class youngest
{
private:
    int ram, shyam, ajay;

public:
    void young();
};
void youngest::young()
{
    cout << "Enter the age of Ram: " << endl;
    cin >> ram;
    cout << "Enter the age of Shyam: " << endl;
    cin >> shyam;
    cout << "Enter the age of Ajay: " << endl;
    cin >> ajay;
    if (ram <= shyam && ram <= ajay)
        cout << "Ram is the youngest among them" << endl;
    if (shyam <= ram && shyam <= ajay)
        cout << "Shyam is the youngest among them" << endl;
    if (ajay <= ram && ajay <= shyam)
        cout << "Ajay is the youngest among them" << endl;
}
int main()
{
    youngest y;
    y.young();
    return 0;
}