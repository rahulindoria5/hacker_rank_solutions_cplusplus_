//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void make_dictionary(int number_of_elements)
{
    map<string, int> m;
    string name;
    int marks_val;
    int marks_sum = 0;
    int value_in_map;
    int query_choice;
    map<string, int>::iterator itr;
    for (int i = 0; i < number_of_elements; i++)
    {
        cin >> query_choice;
        switch (query_choice) {
            
            case 1: 
                cin >> name >> marks_val; 
                itr = m.find(name);  // find an element in the map
                if(itr != m.end())  // check the element, if it is already present in the map
                {
                    value_in_map = m[name];
                    marks_sum = marks_sum + value_in_map;
                    marks_sum = marks_sum + marks_val;
                    m.erase(name);         // delete the previous element
                    m.insert(make_pair(name, marks_sum)); // add new updated element in the map
                }
                else 
                {
                    m.insert(make_pair(name, marks_val));  // add new element in the map
                }
                
                marks_sum = 0;
                break;
                
            case 2:   
                cin >> name; // name : data of student to be deleted
                m.erase(name);
                break;
                
            case 3: 
                cin >> name;
                cout << m[name] << endl;                
                break;
        }
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int N_elements;
    cin >> N_elements;

    make_dictionary(N_elements);
    
    return 0;
}
