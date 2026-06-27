#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create vector
    vector<int> v;

    // push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Vector elements: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // size()
    cout << "Size: " << v.size() << endl;

    // capacity()
    cout << "Capacity: " << v.capacity() << endl;

    // front()
    cout << "Front element: " << v.front() << endl;

    // back()
    cout << "Last element: " << v.back() << endl;

    // at()
    cout << "Element at index 2: " << v.at(2) << endl;

    // pop_back()
    v.pop_back();

    cout << "After pop_back(): ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // insert()
    v.insert(v.begin() + 1, 15);

    cout << "After insert(): ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // erase()
    v.erase(v.begin() + 2);

    cout << "After erase(): ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // empty()
    cout << "Is vector empty? ";
    if(v.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    v.clear();

    cout << "Size after clear(): " << v.size() << endl;

    return 0;
}