#include <iostream>
using namespace std;
class calculate
{
private:
    int n;

public:
    void check_num();
};
void calculate::check_num()
{
    cout << "Enter any number: " << endl;
    cin >> n;
    if (n % 2 == 0)
        cout << "The number " << n << " is even." << endl;
    else
        cout << "The number " << n << " is odd." << endl;
}
int main()
{
    calculate c;
    c.check_num();
    return 0;
}