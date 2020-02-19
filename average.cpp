#include <iostream>

using namespace std;

int main()
{
	double v1;
	double v2;
	double average;
	double time;

	cout << " Enter a starting velocity in meters/second : ";
	cin >> v1;
	cout << " Enter a final velocity in meters/second : ";
	cin >> v2;
	cout << "Enter a time in seconds:  ";
	cin >> time;

	average = (v2 - v1) / time;

	cout << "The average  velocity is " << average << " meters/second " << endl;
	return 0;
}