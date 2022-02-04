#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
};





int main() {
	// Create two instances of person here, and assign the names.
  Person one;
  one.firstName="Dorian";
  one.lastName="Grey";
  Person two;
  two.firstName="Charlie";
  two.lastName="Brown";



	// Add the prints here
  cout<<"Person one: \""
      <<one.firstName<<" "<<one.lastName<<"\"\nPerson two: \""
      <<two.firstName<<" "<<two.lastName<<"\"\n";



	return 76;
}
