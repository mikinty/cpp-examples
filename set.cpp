set<int> s;

//---------------------------------
// General Operations
//---------------------------------

// Insert
s.insert(20);
s.insert(22);

// Size
unsigned int size = s.size();

// Iterate
for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
}

// Remove
s.erase(20);
for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
}

// Clear
s.clear();

//---------------------------------
// Container-Specific Operations
//---------------------------------

// Find if an element exists
bool exists = (s.find(20) != s.end());

// Count the number of elements with a certain value
unsigned int count = s.count(22);
