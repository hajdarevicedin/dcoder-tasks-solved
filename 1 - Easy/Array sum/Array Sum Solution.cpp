#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  
  int t[n];
  int max=0,sum=0;
  for(int i=0; i<n;i++) {
    cin >> t[i];
    sum+=t[i];
    if(t[i]>max) max = t[i];
  }
  cout << sum%max << endl;
}