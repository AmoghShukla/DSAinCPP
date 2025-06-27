// Pairs

// Pairs are used to store two values of different data types.
// They are defined in the <utility> header file.

#include<bits/stdc++.h>
using namespace std;

void explain_pairs(){
    pair <int, int> p1 = {1, 2};
    pair <int, pair<int, int>> p2 = {1,{2,3,}};
    pair <pair <int, int>, pair<int, int>> p3 = {{1,5},{2,6}};

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    // Declare Array in pairs

    pair <int,int> arr[] = { {1,2}, {3,4}, {5,6}, {7,8} };
    cout<< arr[1].second<<endl;
    cout<<arr[3].first<<endl;


}

// Vectors

// Vectors are dynamic arrays that can grow and shrink in size.
// They are defined in the <vector> header file.


void explain_vectors() {
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector<int> v3(5, 100);

    vector<int> v4(5);

    vector<int> v5(5,20);
    vector<int> v6(v5);

    vector<int>::iterator it1 = v1.begin();
    it1++;
    cout<< *it1 <<endl;

    vector<int>::iterator it1 = v1.end();
    it1--;
    cout<< *it1 <<endl;

    // How to print a vector?

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for(auto it : v1) {
        cout << it << " ";
    }   
    cout << endl;

    // How to erase in vector?

    v3.erase(v3.begin()+2); // Erases the element at index 2
    v3.erase(v3.begin()+2, v3.begin()+4); // Erases the elements from index 2 to 4 (exclusive)
    v3.clear(); // Clears the entire vector

    // How to insert in vector?

    v5.insert(v5.begin(), 100); // Inserts 100 at the beginning of the vector
    v5.insert(v5.begin()+2, 200); // Inserts 200 at index 2
    v5.insert(v5.end(), 300); // Inserts 300 at the end of the vector
    v5.insert(v5.begin()+1, 2, 400); // Inserts 400 twice at index 1

    v5.size(); // Returns the size of the vector
    v5.pop_back(); // Removes the last element of the vector
    v5.resize(10); // Resizes the vector to 10 elements, filling with default values if necessary
    v5.swap(v6); // Swaps the contents of v5 and v6
    v5.empty(); // Returns true if the vector is empty, false otherwise
    v5.front(); // Returns the first element of the vector
    v5.back(); // Returns the last element of the vector

}

void explain_list() {
    list<int> l1; // Create an empty list of integers
    l1.push_back(1); // Add 1 to the end of the list
    l1.emplace_back(2); // Add 2 to the end of the list

    list<pair<int, int>> l2; // Create an empty list of pairs of integers
    l2.push_back({1, 2}); // Add a pair (1, 2) to the end of the list
    l2.emplace_back(3, 4); // Add a pair (3, 4) to the end of the list

    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it << " "; // Print each element in the list
    }
    cout << endl;

    for (auto it : l2) {
        cout << it.first << " " << it.second << " "; // Print each pair in the list
    }
    cout << endl;

    l1.pop_front(); // Remove the first element from the list
    l1.pop_back(); // Remove the last element from the list
    l1.clear(); // Clear all elements from the list
}

void explain_deque() {
    deque<int> d1; // Create an empty deque of integers
    d1.push_back(1); // Add 1 to the end of the deque
    d1.emplace_back(2); // Add 2 to the end of the deque
    d1.push_front(0); // Add 0 to the front of the deque

    for (auto it = d1.begin(); it != d1.end(); it++) {
        cout << *it << " "; // Print each element in the deque
    }
    cout << endl;

    d1.pop_front(); // Remove the first element from the deque
    d1.pop_back(); // Remove the last element from the deque
    d1.clear(); // Clear all elements from the deque
}

void explain_stack() {
    stack<int> s1; // Create an empty stack of integers
    s1.push(1); // Push 1 onto the stack
    s1.emplace(2); // Emplace 2 onto the stack

    cout << s1.top() << endl; // Print the top element of the stack

    s1.pop(); // Remove the top element from the stack
    cout << s1.empty() << endl; // Check if the stack is empty (returns 0 for false, 1 for true)
}

void explain_queue() {
    queue<int> q1; // Create an empty queue of integers
    q1.push(1); // Push 1 onto the queue
    q1.emplace(2); // Emplace 2 onto the queue

    cout << q1.front() << endl; // Print the front element of the queue
    cout << q1.back() << endl; // Print the back element of the queue

    q1.pop(); // Remove the front element from the queue
    cout << q1.empty() << endl; // Check if the queue is empty (returns 0 for false, 1 for true)
}

void explain_priority_queue() {
    priority_queue<int> pq1; // Create an empty max-heap priority queue of integers
    pq1.push(1); // Push 1 onto the priority queue
    pq1.emplace(2); // Emplace 2 onto the priority queue

    cout << pq1.top() << endl; // Print the top element of the priority queue (the largest element)

    pq1.pop(); // Remove the top element from the priority queue
    cout << pq1.empty() << endl; // Check if the priority queue is empty (returns 0 for false, 1 for true)
}

void explain_set() {
    set<int> s1; // Create an empty set of integers
    s1.insert(1); // Insert 1 into the set
    s1.emplace(2); // Emplace 2 into the set

    for (auto it = s1.begin(); it != s1.end(); it++) {
        cout << *it << " "; // Print each element in the set
    }
    cout << endl;

    cout << s1.count(1) << endl; // Count occurrences of 1 in the set (returns 0 or 1)
    s1.erase(2); // Remove 2 from the set
    cout << s1.empty() << endl; // Check if the set is empty (returns 0 for false, 1 for true)
}

void explain_multiset() {
    multiset<int> ms1; // Create an empty multiset of integers
    ms1.insert(1); // Insert 1 into the multiset
    ms1.emplace(2); // Emplace 2 into the multiset
    ms1.insert(2); // Insert another 2 into the multiset

    for (auto it = ms1.begin(); it != ms1.end(); it++) {
        cout << *it << " "; // Print each element in the multiset
    }
    cout << endl;

    cout << ms1.count(2) << endl; // Count occurrences of 2 in the multiset
    ms1.erase(2); // Remove one occurrence of 2 from the multiset
    cout << ms1.empty() << endl; // Check if the multiset is empty (returns 0 for false, 1 for true)
}

void explain_map() {
    map<int, string> m1; // Create an empty map with int keys and string values
    m1[1] = "one"; // Insert a key-value pair (1, "one")
    m1[2] = "two"; // Insert a key-value pair (2, "two")

    for (auto it = m1.begin(); it != m1.end(); it++) {
        cout << it->first << " " << it->second << endl; // Print each key-value pair in the map
    }

    cout << m1.count(1) << endl; // Count occurrences of key 1 in the map (returns 0 or 1)
    m1.erase(2); // Remove the key-value pair with key 2 from the map
    cout << m1.empty() << endl; // Check if the map is empty (returns 0 for false, 1 for true)
}

void explain_multimap() {
    multimap<int, string> mm1; // Create an empty multimap with int keys and string values
    mm1.insert({1, "one"}); // Insert a key-value pair (1, "one")
    mm1.emplace(2, "two"); // Emplace a key-value pair (2, "two")
    mm1.insert({2, "deux"}); // Insert another key-value pair with the same key

    for (auto it = mm1.begin(); it != mm1.end(); it++) {
        cout << it->first << " " << it->second << endl; // Print each key-value pair in the multimap
    }

    cout << mm1.count(2) << endl; // Count occurrences of key 2 in the multimap
    mm1.erase(2); // Remove all occurrences of key 2 from the multimap
    cout << mm1.empty() << endl; // Check if the multimap is empty (returns 0 for false, 1 for true)
}

// Extra STL Functions

// Ideally when we are asked to sort an array or vector , we use the bubble sort or selection sort algorithm.
// But STL provides us with a very efficient sort function which is implemented using the merge sort algorithm.
// It is very efficient and has a time complexity of O(n log n).

void explain_sort() {
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end()); // Sort the vector in ascending order

    for (auto it : v) {
        cout << it << " "; // Print the sorted vector
    }
    cout << endl;

    // To sort in descending order
    sort(v.begin(), v.end(), greater<int>());
    
    for (auto it : v) {
        cout << it << " "; // Print the sorted vector in descending order
    }
    cout << endl;
}

// The Syntax of the sort function is:
// sort(start, end, comparator);
// where start is the starting iterator, end is the ending iterator, and comparator is an optional parameter that defines the sorting order.

// How do i create a custom comparator?
// A custom comparator is a function that defines the sorting order.
bool customComparator(int a, int b) {
    return a > b; // Sort in descending order
}

bool customComparatorPair(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first; // Sort pairs based on the first element in ascending order
}

// suppose we want to create a comparator which sorts pairs based on the second element in ascending order, and if the second elements are equal, then based on the first element in descending order.
bool customComparatorPairSecond(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second)  return true; // Sort by second element in ascending order
    if (a.second > b.second)  return false;
    // if these both conditions are wrong it means both second elements are equal
    if (a.first > b.first) return true; // Sort by first element in descending order
    return false; // If both elements are equal, maintain original order
}

// Builtin_popcount function
// The __builtin_popcount function is a built-in function in C++ that counts the number of set bits (1s) in an integer.
// It is available in GCC and Clang compilers.
void explain_builtin_popcount() {
    int num = 29; // Binary representation: 11101
    int count = __builtin_popcount(num); // Count the number of set bits
    cout << "Number of set bits in " << num << " is: " << count << endl; // Output: 4
}

// Next_Permutation
// The next_permutation function is used to generate the next lexicographical permutation of a sequence.
// It rearranges the elements in the range [first, last) into the next permutation.
// If the function returns false, it means that the last permutation has been reached, and the sequence is rearranged to the first permutation (sorted in ascending order).
void explain_next_permutation() {
    vector<int> v = {1, 2, 3};
    do {
        for (auto it : v) {
            cout << it << " "; // Print the current permutation
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end())); // Generate the next permutation
}

// It is very important to start with a sorted array or vector when using next_permutation.
// failing to do so will result in undefined behavior.
// The next_permutation function is defined in the <algorithm> header file.

// The syntax of the next_permutation function is:
// next_permutation(start, end);
// where start is the starting iterator, and end is the ending iterator.

//max_element
// The max_element function is used to find the maximum element in a range.
// It returns an iterator to the maximum element in the range [first, last].
void explain_max_element() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto max_it = max_element(v.begin(), v.end()); // Find the maximum element
    cout << "Maximum element is: " << *max_it << endl; // Output: 5
}

// The syntax of the max_element function is:
// max_element(start, end);
// where start is the starting iterator, and end is the ending iterator.

int main() {
    explain_pairs();
    explain_vectors();
    explain_list();
    explain_deque();
    explain_stack();
    explain_queue();
    explain_priority_queue();
    explain_set();
    explain_multiset();
    explain_map();
    explain_multimap();
    explain_sort();
    explain_builtin_popcount();
    explain_next_permutation();
    explain_max_element();

    return 0;
}