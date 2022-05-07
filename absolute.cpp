#include <iostream>
using namespace std;
class absolute
{
private:
    int n;

public:
    void abs_value();
};
void absolute::abs_value()
{
    cout << "Enter any number whose absolute value you want to find out: " << endl;
    cin >> n;
    if (n < 0)
        cout << "The absolute value of " << n << " is= " << (-1) * n << endl;
    else
        cout << "The absolute value of " << n << " is= " << n << endl;
}
int main()
{
    absolute ab;
    ab.abs_value();
    return 0;
}