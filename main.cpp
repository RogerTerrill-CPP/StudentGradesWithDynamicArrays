#include <iostream>
using namespace std;

//Define charArrayPtr as a char pointer
typedef char* charArrayPtr;

//Prototype initialization
void fillGradeArray(char a[], int size);
void display(const char a[], int size);

int main()
{
	//Initialize classSize
	int classSize;

	//Ask user to input number of students
	cout << "How many students are in the class: ";

	//User input class size
	cin >> classSize;

	//Initialize input array pointer
	charArrayPtr a;

	//New dynamic array a
	a = new char[classSize];

	//Function execution
	fillGradeArray(a, classSize);
	display(a, classSize);

	//Delete dynamic array to freestore
	delete[] a;
	return 0;
}

/*******************************************************
Name            :   void fillGradeArray(char a[], int size)
Arguments       :   a[], size, i
Returns         :   None
Precondition    :   size must have a value and a declared
Postcondition   :   Provide amount size values for dynamic array
*******************************************************/
void fillGradeArray(char a[], int size)
{
	cout << "Enter " << size << " grades\n";
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}

/*******************************************************
Name            :   void display(const char a[], int size)
Arguments       :   a[], size, i
Returns         :   None
Precondition    :   a[] and size must have values
Postcondition   :   Display the dynamic array
*******************************************************/
void display(const char a[], int size)
{
	cout << "The following are the scores\n";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;
}
