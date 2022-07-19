#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache{
    public:
        LRUCache(int capacity)
        {
            cp = capacity;
        }

        void set(int key, int value)
        {
          //  for (int i = 0; i < cp; i++)
            {
                if (mp.find(key)!= mp.end()) 
                {
                    mp.erase(key);
                    map<int, Node *>::iterator it = mp.begin();
                    //Node *p = new Node(key, value) ;
                    mp.insert(it, make_pair(key, new Node(key, value)));
                }
                else
                {
                    map<int, Node *>::iterator it = mp.begin();
                    //Node *p = new Node(key, value) ;
                    mp.insert(it, make_pair(key, new Node(key, value)));
                }     
            }
        }
                   
        int get(int key)
        {
            map<int, Node *>::iterator it = mp.begin();
            it = mp.find(key);
            
            if (it != mp.end())
            {
                return it->second->value;       

            }
            else
            {
              return -1;
            }
        }
};


int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
