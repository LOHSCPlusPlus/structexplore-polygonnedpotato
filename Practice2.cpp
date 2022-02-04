#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
  Person();
};
Person::Person() {
  firstName="unknown";
  lastName="unknown";
}




int main() {
	// Create two instances of person here, and assign the names.
  Person one;
  cout<<"initialized Person one as \""<<one.firstName<<" "<<one.lastName<<"\".\n";
  one.firstName="Dorian";
  one.lastName="Grey";
  Person two;
  cout<<"initialized Person two as \""<<two.firstName<<" "<<two.lastName<<"\".\n";
  two.firstName="Charlie";
  two.lastName="Brown";



	// Add the prints here
  cout<<"Person one: \""
      <<one.firstName<<" "<<one.lastName<<"\"\nPerson two: \""
      <<two.firstName<<" "<<two.lastName<<"\"\n";



	return 76;
}
