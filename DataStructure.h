#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DataStructure {
public:
	DataStructure(); // Constructor

	void addData(int data); // Function to add data
	void removeData(int data); // Function to remove data
	void displayData() const; // Function to display data

	// Any other member functions required for your project

private:
	vector<int> data; // A container to hold the data
};

#endif