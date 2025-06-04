#include <bits/stdc++.h>
using namespace std;

class Student  // Making class
{
public:
   string name;
   int roll;
   float gpa;
   int age;
};

void print(Student s)  // A function for printing objects
{
   cout << "Name: " << s.name << "  " << "Roll: " << s.roll << "  " << "GPA: " << s.gpa << "  " << "Age: " << s.age << endl;
}

int main()
{
   Student s1;  // 1st object
   s1.name = "Shakhawat";
   s1.roll = 76;
   s1.gpa = 8.2;
   s1.age = 17;

   Student s2;  // 2nd object
   s2.name = "Sahil";
   s2.roll = 43;
   s2.gpa = 2.5;
   s2.age = 23;

   Student s3;  // 3rd object
   s3.name = "Gaba";
   s3.roll = 65;
   s3.gpa = 6.4;
   s3.age = 26;

   print(s1);
   print(s2);
   print(s3);

   return 0;
}
