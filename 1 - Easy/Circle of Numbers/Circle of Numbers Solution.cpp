#include <iostream>
using namespace std;

int main () 
{
    int n,x;
    cin >> n >> x;

    int y = (x+n/2)%n;
    cout << y << endl;
}