#include <iostream>

using namespace std;

class clsPerssen
{
public:
    string FirstName;
    string LastName;

    string fullName()
    {
        return FirstName + " " + LastName;
    }

private:
    int age;
};

int main()
{
    clsPerssen Perssen1;
    Perssen1.FirstName = "Alae";
    Perssen1.LastName = "Azzaoui";

    cout << Perssen1.fullName() << endl;
}