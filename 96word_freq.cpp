#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "hello world hello coding world coding coding";
    unordered_map<string, int> wordFreq;
    
    stringstream ss(sentence);
    string word;
    
    // Extract and count words
    while (ss >> word) {
        wordFreq[word]++;
    }
    
    cout << "Word Frequencies:" << endl;
    for (auto pair : wordFreq) {
        cout << "'" << pair.first << "' appears " << pair.second << " times" << endl;
    }
    
    return 0;
}