#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
  Person();
  Person(string a,string b);
};
Person::Person() {
  firstName="unknown";
  lastName="unknown";
}
Person::Person(string a,string b){
  firstName=a;
  lastName=b;
}



int main() {
	// Create two instances of person here, and assign the names.
  Person one;
  cout<<"initialized Person one as \""<<one.firstName<<" "<<one.lastName<<"\".\n";
  one.firstName="Dorian";
  one.lastName="Grey";
  Person two("Linus","Van Pelt");
  cout<<"initialized Person two as \""<<two.firstName<<" "<<two.lastName<<"\".\n";



	// Add the prints here
  cout<<"Person one: \""
      <<one.firstName<<" "<<one.lastName<<"\"\nPerson two: \""
      <<two.firstName<<" "<<two.lastName<<"\"\n";



	return 76;
}
