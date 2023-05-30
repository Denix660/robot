#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand ((unsigned) time(NULL));
    int x = (rand() % 9);
    cout << x << endl;
}