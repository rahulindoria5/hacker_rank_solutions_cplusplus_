#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
    public :
        virtual void getdata()
        {
            cin >> this->name >> this->age;
        }

        virtual void putdata()
        {
            cout << this->name << " " << this->age;
        }
};

class Professor : public Person
{
    private:
        int publications;
        int cur_id;
        static int id;
        
    public:
        Professor()
        {
            this->cur_id = ++id;
        }
    
        void getdata()
        {
            cin >> this->name >> this->age >> this->publications;
        }  
        
        void putdata()
        {
            cout << this->name << " " << this->age << " " << this->publications <<  " " << this->cur_id << endl;
        }
};
int Professor::id = 0;

class Student : public Person
{
    private:
        int marks[6];
         int curd_id;
         static int id;
      
    public:
        
        Student()
        {
            this->curd_id = ++id;
        }
        
        void getdata()
        {
            cin >> this->name >> this->age;
            for (int i = 0; i < 6; i++)
                cin >> marks[i];
        }
    
        void putdata()
        {
            int sum = 0;
            
            for (int i=0; i < 6; i++)
            {
                sum = sum + marks[i];
            }
            
            cout << this->name << " " << this->age << " " << sum << " " << this->curd_id << endl;
        }
};
int Student::id = 0;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
