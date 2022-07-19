#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    set<int> s;
    
    // enter the number of elements in set
    int N;
    cin >> N;
    int element;   
    int choice;
    
    for (int i = 0; i < N; i++)
    {
        cin >> choice;
        
        switch (choice) {
        case 1: cin >> element;
                s.insert(element);
                break;
        
        case 2: cin >> element;
                s.erase(element);
                break;
                
        case 3: cin >> element;
                set<int>::iterator itr=s.find(element);
                if (itr != s.end())
                    cout << "Yes" << endl;
                else 
                    cout << "No" << endl;
                
                break;
                
        }
        
    } 

    // set<int>:: iterator it;
    // for( it = s.begin(); it!=s.end(); ++it){
    //     int ans = *it;
    //     cout << "-> " << ans << endl;
    // }
                

    return 0;
}



