#include <iostream>
using namespace std;

void ReadGrades(float Grades[3])
{

	cout << "please enter G1 \n";
	cin >> Grades[0];

	cout << "please enter G2 \n";
	cin >> Grades[1];

	cout << "please enter G2 \n";
	cin >> Grades[2];



}

float CalculateAverageGrades(float Grades[3])
{

	return (Grades[0] + Grades[1] + Grades[2]) / 3;


}

int main()
{
	float Grades[3];

	ReadGrades(Grades);

	cout << "the verage of grades is " << CalculateAverageGrades(Grades) << endl;

	return 0;



}