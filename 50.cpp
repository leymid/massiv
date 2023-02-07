#include <iostream>

using namespace std;

void f1();

int main()
{
	char str[] = "eto - massiv str v funksii main().";
	cout << str << '\n';
	f1();
	cout << str << '\n';

	return 0;
}

void f1()
{
	char str[80];
	cout << "vvedite kakuyu-nebut stroku: ";
	cin >> str;
	cout << str << '\n';
}
