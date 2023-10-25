#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    cout << "Enter 10 words" << endl;
    vector<string> words;
    for (string word; cin >> word && words.size() != 10;)
    words.push_back(word);
    int kolvooka = 0, lengthkor = 10000, kolvob = 0, kolvosovp = 0;
    for (int cnt = 0; cnt != 10; cnt++){
        for (int cntslova = 0; cntslova < words[cnt].size(); cntslova++)
            words[cnt][cntslova] = tolower(words[cnt][cntslova]);
    }
    for (string word: words){
        if (word.size() == 1 || word[0] == word.back())
            kolvosovp++;
    }
    for (int cnt = 0; cnt != 10; ++cnt) {
        if (words[cnt].back() == 'a')
            kolvooka++;
        if (words[cnt].size() < lengthkor)
            lengthkor = words[cnt].size();
        /*if (cnt == 2){
            cout << words[cnt];
            for (int cnt2slova = 0; cnt2slova < words[cnt].size(); cnt2slova++){
                cout << words[cnt][cnt2slova];
                if (words[cnt][cnt2slova] == 'b') {
                    kolvob++;
                    cout << kolvob, words[cnt][cnt2slova];
                }
            }
        } */
    }
    for (int cnt2slova = 0; cnt2slova < words[1].size(); cnt2slova++){
        if (words[1][cnt2slova] == 'b')
            kolvob++;
    }

    cout << "Your words: ";
    for (string word: words)
        cout << word << ", ";
    cout << endl;
    cout << "Amount of words with a in the end: " << kolvooka << endl;
    cout << "Length of the shortest word is " << lengthkor << endl;
    cout << "Amount of b in the second word is " << kolvob << endl;
    cout << "Amount of words whose first and last letter match: " << kolvosovp << endl;

}





