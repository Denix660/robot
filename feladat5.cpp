#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int bekert;
    cout << "adj meg egy számot 1-20-ig" << endl;
    cin >> bekert;

    srand((unsigned)time(NULL));
    int generalt = 1 + (rand() % 20);
    bool eldönt = false;

    while (eldönt == false)
    {
        if (bekert < generalt && bekert != 0)

        {
            eldönt = true;
            cout << "Eltaláltad és kisebb mint:" << generalt << endl;
        }


        else
        {
            cout << "A szám nem jó, mert el kell találnod, hogy kisebbnek kell lennie mint a generált szám." << endl;
            cin >> bekert;
        }
    
    }

    for (int i = bekert; i <= generalt; i++)        
    {
        if (i % 2 == 0)
        {
         cout << i << endl;   
        }
        
    }


    /*
    && - és
    || - vagy
    < - kisebb
    > - nagyobb
    <= - kisebb egyenlő
    >= - nagyobb egyenlő
    == - egyenlő
    != - nem egyenlő
    */
 
    
}