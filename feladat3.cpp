#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    srand ((unsigned) time(NULL));
    int x = (rand() % 9);
    int y;
    cout << "adj meg egy számot 1-9-ig" << endl;
    cin >> y ;
    if (x == y)
    {
        cout << "Gratulálok a számot eltaláltad" << endl;
    }
    else
        
    {
        cout << "Sajnos nem találtad el számot" << endl;
    }

    cout << x << endl;
    

}