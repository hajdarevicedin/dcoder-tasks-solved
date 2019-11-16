#include <iostream>
using namespace std;


int main()
{
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int n;
	cin >> n;

	for (int i = n - 1;i >= 0;i--) {
		cout << alphabet[i];
	}
}