/**
* @file main.cpp
* @brief Week 10, C++ review and Warmup from CSI140
*
* @author Julien Marcuse
* @assignment Lecture 10.1
* @date 11/6/2020
* @credits
*
*/

#include "util.h"

using namespace std;

int main() {
	//Initialize and populate string vector
	vector<string> svec;
	svec.push_back("Hello");
	svec.push_back("Hey");
	svec.push_back("Howdy");
	svec.push_back("Hi");
	svec.push_back("Outlier");
	
	//Print out contents of string vector
	dumpVec(svec);

	//Get random element
	cout << endl;
	cout << "Calling randomElement" << endl;
	cout << randomElement(svec) << endl << endl;

	//Initialize and populate double vector
	vector<double> dvec;
	dvec.push_back(3.14);
	dvec.push_back(5.56);
	dvec.push_back(7.72);
	dvec.push_back(9);
	dvec.push_back(-4);
	dvec.push_back(99.99);
	dvec.push_back(22);
	dvec.push_back(30);

	//Print out contents of double vector
	dumpVec(dvec);
	
	cout << "Sum: " << sum(dvec) << endl;
	cout << "Average: " << avg(dvec) << endl;
	cout << "Lowest: " << lowest(dvec) << endl << endl;
	
	string str = "A little bird with a yellow tail";
	cout << "Calling camelCase with: " << str << endl;
	camelCase(str);
	cout << "strMessage after camelCase: " << str << endl;
}
