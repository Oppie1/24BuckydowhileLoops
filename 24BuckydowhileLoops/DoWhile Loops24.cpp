#include <iostream>
#include <cmath>
using namespace std;
// main reason why people want to make sure their code runs through at least one time
// probably most uncommon loop but some people prefer it over while loop
// basically "while" loop flipped upside down
int main()
{
	int x = 1; // int x 99 will just print out 99 because it is greater than 10

	do {
		cout << x << endl;
		x++;

	} while (x < 10);

}