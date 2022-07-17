#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str, string delimiter) {
	// Complete this function

    string del = delimiter;

    int start = 0;
    int end = str.find(del);

    string sk;
    int num;
    vector<int> int_arr;
    
    while (end != -1) {

        sk = str.substr(start, end - start);
        num = stoi(sk);
        int_arr.push_back(num);
       // cout << str.substr(start, end - start) << endl;
        start = end + del.size();
        end = str.find(del, start);
    }

    sk = str.substr(start, end - start);
    num = stoi(sk);
    int_arr.push_back(num);

    return int_arr;
}


int main() {
    string str;
    getline(cin, str);

    string delimiter;
    getline(cin, delimiter);

    vector<int> integers = parseInts(str, delimiter);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}