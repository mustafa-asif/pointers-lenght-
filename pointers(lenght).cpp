#include <iostream>
#include <string>
using namespace std;
int main()
{
	string  *ptr;
	string str;
	cout << "enter string" << endl;
	getline(cin, str);
	ptr = &str;
	string l=*ptr;
	
	
	cout << "the lenght of string is " << l.length() << endl;
}