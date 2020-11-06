/**
* @file util.h
* @brief Function definitions and constants
* @author Julien Marcuse
*/

#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Vector functions

//Gets the sum of the values in a vector of doubles
double sum(vector<double>& vec);
//Gets the average of the values in a vector of doubles
double avg(vector<double>& vec);
//Gets the minimum value in a vector of doubles
double lowest(vector<double>& vec);

//Converts a string to camelCase
void camelCase(string& str);

//Template functions cannot be defined and implemented separately
//Gets a random element from a vector
template <typename T>
T randomElement(vector<T>& vec) {
	//Seed the random number generator
	srand(time(NULL));
	//Get and return a random element
	return vec[rand() % vec.size()];
}

//Dump the contents of a vector
template <typename T>
void dumpVec(vector<T>& vec) {
	cout << "Dumping the vector of " << vec.size() << " elements: ";
	for (T& val : vec) {
		cout << val << " ";
	}
	cout << endl;
}
