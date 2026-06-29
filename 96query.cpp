#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 10, 40};
    unordered_map<int, int> freq;
    
    // Pre-calculate frequencies
    for (int num : arr) {
        freq[num]++;
    }
    
    // Answer queries
    vector<int> queries = {10, 30, 50, 20, 40};
    
    cout << "Query Results:" << endl;
    for (int query : queries) {
        if (freq.find(query) != freq.end()) {
            cout << query << " appears " << freq[query] << " times" << endl;
        } else {
            cout << query << " appears 0 times" << endl;
        }
    }
    
    return 0;
}