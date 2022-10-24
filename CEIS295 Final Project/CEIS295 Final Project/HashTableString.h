#pragma once
// https://www.geeksforgeeks.org/c-program-hashing-chaining/
// CPP program to implement hashing with chaining
#include<cstdlib>
#include<iostream>
#include<string>
#include<list>
using namespace std;

class HashtableString {
	int BUCKET;    // No. of buckets

	// Pointer to an array containing buckets
	list<string>* table;

public:
	HashtableString();  // Default Constructor
	HashtableString(int V);  // Constructor
	void example();
	// inserts a key into hash table
	void insertItem(string x);
	// deletes a key from hash table
	void deleteItem(string key);
	// hash function to map values to key
	int hashFunction(string x);
	void displayHash();
	bool findItem(string x); // Search function
	
};
