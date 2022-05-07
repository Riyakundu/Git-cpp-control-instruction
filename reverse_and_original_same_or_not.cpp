#include <iostream>
using namespace std;
class reverse
{
private:
    int n;

public:
    void rev_num();
};
void reverse ::rev_num()
{
    int temp, r, s = 0;
    cout << "Enter any number: " << endl;
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        temp = temp / 10;
        s = (s * 10) + r;
    }
    cout << "The reverse of " << n << " is= " << s << endl;
    if (n == s)
        cout << "The original and reversed numbers are same..." << endl;
    else
        cout << "The original and reversed numbers are not same..." << endl;
}
int main()
{
    reverse num;
    num.rev_num();
    return 0;
}