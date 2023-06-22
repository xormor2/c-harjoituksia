#include <iostream>
#include <string>
using namespace std;
class nimi {
private:
  string nimi;

public:
  int kysynimi()
  {
    using namespace std;
    //string nimi;
    cout << "Mikä on nimesi? ";
    cin >> nimi; cout << "No hyvää päivää " << nimi << "!\n";
    return 0;
  }
};

int main()
{
nimi kysely;
return kysely.kysynimi();
}
