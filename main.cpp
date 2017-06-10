#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    system("color 0b");

    int p,n;
    float r,si;

    cout << "Type The Principle \n";
    cin >> p;
    cout << "\n";

    cout << "Type The Number Of Months \n";
    cin >> n;
    cout << "\n";

    cout << "Type The Number Of Rate Of Interest \n";
    cin >> r;
    cout << "\n";

    si = (p * n * r) /100;

    cout << "Simple Interest is " << si ;
    cout << "\n";

    return 0;
}
