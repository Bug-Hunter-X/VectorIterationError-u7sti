std::vector<int> myVector; 

// ... some code that adds elements to myVector ...

for (int i = 0; i <= myVector.size(); ++i) { // Bug: Accessing beyond the valid range
  std::cout << myVector[i] << " ";
}

// ... more code ...