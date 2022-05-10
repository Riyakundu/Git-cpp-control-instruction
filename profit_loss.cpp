#include <iostream>
using namespace std;
class calculate
{
private:
    float sp, cp;

public:
    void profit_loss();
};
void calculate::profit_loss()
{
    cout << "Enter the cost price: " << endl;
    cin >> cp;
    cout << "Enter the selling price: " << endl;
    cin >> sp;
    if ((sp - cp) > 0)
        cout << "The seller made profit of Rs. " << (sp - cp) << endl;
    if ((cp - sp) > 0)
        cout << "The seller incurred loss of Rs. " << (cp-sp) << endl;
    if ((sp - cp) == 0)
        cout << "The is no loss, no profit." << endl;
}
int main()
{
    calculate scp;
    scp.profit_loss();
    return 0;
}