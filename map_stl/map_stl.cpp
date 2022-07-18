//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    map<string, int> m;
    int N_elements;
    cin >> N_elements;
    
    string name;
    int marks_val;
    int marks_sum = 0;
    int value_in_map;
    int query_choice;
    map<string, int>::iterator itr;
    for (int i = 0; i < N_elements; i++)
    {
        cin >> query_choice;
        switch (query_choice) {
            
            case 1: 
                cin >> name >> marks_val; 
                itr = m.find(name);
                if(itr != m.end())
                {
                    value_in_map = m[name];
                    marks_sum = marks_sum + value_in_map;
                    marks_sum = marks_sum + marks_val;
                    m.erase(name);
                    m.insert(make_pair(name, marks_sum));
                }
                else 
                {
                    m.insert(make_pair(name, marks_val));
                }
                
                marks_sum = 0;
                break;
                
            case 2:   
                cin >> name; // name : data of student to be deleted
                m.erase(name);
                break;
                
            case 3: 
                cin >> name;
 //               for (int i = 0; i < m.size(); i++)
                {
                    cout << m[name] << endl;                
                }
                break;
        }
    }
    
    return 0;
}
