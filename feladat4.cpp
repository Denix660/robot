#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int szamlalo = 1;
    int bekert;
    cout << "adj meg egy szamot" << endl;
    cin >> bekert;
    srand((unsigned)time(NULL));
    int generalt = (rand() % 9);
    bool eldönt = false;
    while (eldönt == false)
    {
        
        if (bekert == generalt)
        {
            eldönt = true;
            cout << "Gratulálok a számot eltaláltad" << endl;
            cout << "A generált szám:" << generalt << endl;
            cout << "Probálkozások száma:" << szamlalo << endl;
        }
        
        else

        {
            cout << "Sajnos nem találtad el számot" << endl;
            cout << "adj meg egy ujra szamot" << endl;
            cin >> bekert;
            szamlalo++;
        }
    }
}