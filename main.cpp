#include <iostream>
#include "DataStructure.h"

int main() {
	DataStructure ds; // Create an object of the DataStructure class

	ds.addData(10); // Add some data
	ds.addData(20);
	ds.addData(30);
	ds.displayData(); // Display the data

	ds.removeData(20); // Remove data
	ds.displayData(); // Display the data after removal

	return 0;
}