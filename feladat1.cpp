#include <iostream>
using namespace std;

int main()
{
    int szam;
    cout << "adj meg egy számot" << endl ;
    cin >> szam;
    if (szam == 5)
    {
        cout << "Gratulálok eltaláltad" << endl ;
    }
    else
    {
        cout << "sajnos nem találtad el" << endl;
    }
    return 0;
}
