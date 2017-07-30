#include <iostream>
#include <climits>
using namespace std;
int main(void)
{
cout << sizeof(long) << " bytes per long." << endl;
cout << sizeof(long)*CHAR_BIT << " bits per long." << endl;
cout << sizeof(int) << " bytes per int." << endl;
cout << sizeof(int)*CHAR_BIT << " bits per int." << endl;
return 0;
}

