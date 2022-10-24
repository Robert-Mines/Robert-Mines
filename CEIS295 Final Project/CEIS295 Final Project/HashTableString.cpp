// https://www.geeksforgeeks.org/c-program-hashing-chaining/
// CPP program to implement hashing with chaining

#include "HashtableString.h"

HashtableString::HashtableString() {
	this->BUCKET = 26;
	table = new list<string>[BUCKET];
}

HashtableString::HashtableString(int b) {
	this->BUCKET = b;
	table = new list<string>[BUCKET];
}

void HashtableString::insertItem(string key) {
	int index = hashFunction(key);
	table[index].push_back(key);
}

void HashtableString::deleteItem(string key) {
	// get the hash index of key
	int index = hashFunction(key);

	// find the key in (inex)th list
	list<string>::iterator i;
	for (i = table[index].begin(); i != table[index].end(); i++) {
		if (*i == key)
			break;
	}

	// if key is found in hash table, remove it
	if (i != table[index].end())
		table[index].erase(i);
}

// function to display hash table
void HashtableString::displayHash() {
	for (int i = 0; i < BUCKET; i++) {
		cout << i;
		for (auto x : table[i])
			cout << " --> " << x;
		cout << endl;
	}
}

// Driver program
void HashtableString::example() {
	// array that contains keys to be mapped
	string a[] = { "Gus", "Bobby", "Ester", "Rebby", "Max" };
	int n = sizeof(a) / sizeof(a[0]);

	// insert the keys into the hash table
	HashtableString h(7);   // 7 is count of buckets in
	// hash table
	for (int i = 0; i < n; i++)
		h.insertItem(a[i]);

	// delete 12 from hash table
	h.deleteItem("12");

	// display the HashtableString table
	h.displayHash();
}

int HashtableString::hashFunction(string x) {

	int hashKey = 0;

	for (int i = 0; i < x.length(); i++) {
		char y = x.at(i);
		hashKey += int(y);
	}

	return (hashKey % BUCKET);
}

bool HashtableString::findItem(string x) // Search function
{
	// get the hash index of key
	int index = hashFunction(x);
	bool foundit = false;
	// find the key in (inex)th list
	list<string>::iterator i;
	for (i = table[index].begin(); i != table[index].end(); i++) {
		if (*i == x)
		{ 
			foundit = true;
			break;
		}	
	}
	return foundit;
}