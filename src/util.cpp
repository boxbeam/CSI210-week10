/**
* @file util.cpp
* @brief Function implementations
* @author Julien Marcuse
*/

#include "util.h"
#include <float.h>

double sum(vector<double>& vec) {
	//Create a variable to keep track of the sum
	double sum = 0;
	//Iterate the vector
	for (double& val : vec) {
		//Add the value to the sum
		sum += val;
	}
	return sum;
}


double avg(vector<double>& vec) {
	//Average is equal to the sum of all values divided by the number of values
	//Get the sum and divide it by the vector's length
	return sum(vec) / vec.size();
}

double lowest(vector<double>& vec) {
	//Create a variable initialized to the max value a double can hold
	//This is so that any value will be considered lower than this
	//Potential issue: DBL_MAX will be returned if the vector is empty
	double lowest = DBL_MAX;
	for (double& val : vec) {
		if (val < lowest) {
			lowest = val;
		}
	}
	return lowest;
}

void camelCase(string& str) {
	//Variable to remember whether the last character was a space
	bool lastSpace = false;
	for (int i = 0; i < str.size(); i++) {
		//If character is a space, set lastSpace to true and delete the space
		if (str[i] == ' ') {
			lastSpace = true;
			str.erase(i, 1);
			i--;
			continue;
		}
		//If the last character was a space, capitalize this character. Otherwise, lowercase it.
		str[i] = lastSpace ? toupper(str[i]) : tolower(str[i]);
		//Reset lastSpace
		lastSpace = false;
	}
}
