#include <bits/stdc++.h>
using namespace std;

class Student // Making class
{
public:
   string name;
   int roll;
   float gpa;
   int age;
};

void change(Student *s)
{
   // (*s).roll = 88;  //Changing the value using pointer
   s->roll = 88; //(*s).roll = 88
}

int main()
{
   Student s1;
   s1.name = "Shakhawat";
   s1.roll = 76;
   s1.gpa = 8.2;
   s1.age = 17;

   cout << "Roll: " << s1.roll << endl;
   change(&s1);
   cout << "Roll: " << s1.roll;

   return 0;
}
