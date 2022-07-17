#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1, str2;
    
    getline(cin, str1);
    //cout << endl;
    getline(cin, str2);
    
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;

    // str1 : abcd : ebcd 
    // str2 : ef : af

    char temp;
    temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    cout << str1 << " " << str2;

    return 0;
}