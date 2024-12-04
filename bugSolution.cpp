std::vector<int> myVector; 

// ... some code that adds elements to myVector ...

for (int i = 0; i < myVector.size(); ++i) { // Corrected: Accessing within the valid range
  std::cout << myVector[i] << " ";
}

// ... more code ...

// Alternatively, use iterators for safer and more idiomatic C++:
for (int& element : myVector) {
  std::cout << element << " ";
}
// Or range-based for loop for const access:
for (const int& element : myVector) {
  std::cout << element << " ";
}