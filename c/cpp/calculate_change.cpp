#include <iostream>
using namespace std;
int main(void)
{
float amount_paid, change, cost_of_purchase;
//x+y=z, z=amount_paid; y=change; x=cost;
cout << "What is the cost of your purchase? ";
cin >> cost_of_purchase;
cout << "How much do you pay? ";
cin >> amount_paid;
change = amount_paid - cost_of_purchase;
cout << "The change you get: " << change << endl;

return 0;
}
