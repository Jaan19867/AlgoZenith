#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

// Function template to print elements of a container
template <typename Container>
void printContainer(const Container& container) {
    for (const auto& element : container) {
        cout << element << " ";
    }
    cout << endl;
}

// Specialization for map and unordered_map to print key-value pairs
template <typename Key, typename Value>
void printContainer(const map<Key, Value>& container) {
    for (const auto& pair : container) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;
}

template <typename Key, typename Value>
void printContainer(const unordered_map<Key, Value>& container) {
    for (const auto& pair : container) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;
}

int main() {
    // Test with vector
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector: ";
    printContainer(vec);

    // Test with set
    set<int> s = {1, 2, 3, 4, 5};
    cout << "Set: ";
    printContainer(s);

    // Test with unordered_set
    unordered_set<int> us = {1, 2, 3, 4, 5};
    cout << "Unordered Set: ";
    printContainer(us);

    // Test with map
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    cout << "Map: ";
    printContainer(m);

    // Test with unordered_map
    unordered_map<int, string> um = {{1, "one"}, {2, "two"}, {3, "three"}};
    cout << "Unordered Map: ";
    printContainer(um);

    return 0;
}
