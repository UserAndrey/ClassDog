//#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
class Dog
{
	   // Access specifier
public:
	  // Data Members
	string Dogname;
	string Breed;
	string Color;
	string Gender;
	string weight;
	void Printdetails()   // Member Function()
	{   
		cout << "\nDog Name       " << Dogname;
		cout << "\nDog Breed      " << Breed;
		cout << "\nDog Color      " << Color;
		cout << "\nDog Gender     " << Gender;
		cout << "\nDog weight     " << weight;
	}
};
int main() {
	Dog object1; // Declare an object of class geeks
	char name[50];
	char Dogname[50];
	char Breed[50];
	char Color[50];
	char Gender[50];
	char weight[50];
cout << "Please enter the details: ";
cout << "Name: ";
cin.getline(name, 50);
cout << "Breed: ";
cin.getline(Breed, 50);
cout << "Color: ";
cin.getline(Color, 50);
cout << "Gender: ";
cin.getline(Gender, 50);
cout << "weight: ";
cin.getline(weight, 50);

object1.Dogname = name; //accessing data member
object1.Breed = Breed;
object1.Color = Color;
object1.Gender = Gender;
object1.weight = weight; // accessing data function
object1.Printdetails();
return 0;
}