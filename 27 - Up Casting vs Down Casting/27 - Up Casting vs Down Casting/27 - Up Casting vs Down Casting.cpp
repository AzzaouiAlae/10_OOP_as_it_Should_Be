#include <iostream>

using namespace std;

class clsPerson {
public:
    string FullName = "Alae Azzaoui";
};

class clsEmployee : public clsPerson
{
public:
    string Title = "Web Devloper";
};

int main()
{
    clsEmployee Emp1;
    cout << "Emp1.FullName : " << Emp1.FullName << endl;

    clsPerson * Prs1 = &Emp1;
    cout << "Prs1->FullName : " << Prs1->FullName << endl;

    clsPerson Prs2;
    cout << "\nPrs2.FullName : " << Prs2.FullName << endl;
     
    //clsEmployee * Emp2 = &Prs2;


    system("pause>0");


}