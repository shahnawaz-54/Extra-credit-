#include "DataStructure.h"

// Constructor to initialize data container
DataStructure::DataStructure() {
    // Initial setup, if any
}

void DataStructure::addData(int data) {
    this->data.push_back(data); // Add data to the vector
}

void DataStructure::removeData(int data) {
    auto it = find(this->data.begin(), this->data.end(), data);
    if (it != this->data.end()) {
        this->data.erase(it); // Remove data if found
    }
}

void DataStructure::displayData() const {
    if (data.empty()) {
        cout << "No data to display." << endl;
    }
    else {
        for (const auto& item : data) {
            cout << item << " ";
        }
        cout << endl;
    }
}