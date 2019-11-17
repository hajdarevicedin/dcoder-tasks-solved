#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    char word[n];
    for(int i=0; i<n; i++) {
        cin >> word[i];
        for(int ii=0;i<3;ii++) cout << word[i];
    }
}