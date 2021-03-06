/*
 * Aufgabe 9 - Längster Substring
 *
 * Eine Methode welche den längsten Substing aus zwei Substrings zurückgiebt.
 */

#include <iostream>
#include "StringUtil.h"
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillString(string &string1, int n) {
    for (int i = 0; i < n; ++i) {
        string1 += (char) ((rand() % 26) + 'A');
    };
    //string1 += "Hallo Welt, ich bin ein Test String";
};

void loadFromFileToString(string filePath, string &toFill) {
    string temp;
    ifstream file(filePath);
    if (file.is_open()) {
        while (file.good()) {
            getline(file, temp);
            toFill += temp;
        }
    }
    file.close();
}

int main() {
    time_t start, stop;

    string testString1 = "adsfa";
    string testString2 = "adfadsf";

    //Putin vs. Trump (WIKI)
/*
    loadFromFileToString("../Putin.txt", testString1);
    loadFromFileToString("../DonaldTrump.txt", testString2);
*/

    //Audi vs. Tesla (WIKI)
    /*
    loadFromFileToString("../Audi.txt", testString1);
    loadFromFileToString("../Tesla.txt", testString2);
    */

    //Abraham Lincoln vs. Freimaurer (WIKI)
    /*
    loadFromFileToString("../AbrahamLincoln.txt", testString1);
    loadFromFileToString("../Freimaurer.txt", testString2);
    */

    // Fill String with Random Numbers

    //fillString(testString1, 10000);
    //fillString(testString2, 100000);



    start = clock();
    cout << "Längster String = " << StringUtil::lcs2(testString1, testString2) << endl;
    stop = clock();
    cout << "Runtime => " << (double) (stop - start) / CLOCKS_PER_SEC << endl;

    cout << "String1 length => " << testString1.length() << endl;
    cout << "String2 length => " << testString2.length() << endl;
    cout << "Runtime => " << (double) (stop - start) / CLOCKS_PER_SEC << endl;

    return 0;
}