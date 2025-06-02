#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
   string name;
   int roll;
   float gpa;
   int age;
};

void print(Student s)
{
   cout << "Name: " << s.name << "  " << "Roll: " << s.roll << "  " << "GPA: " << s.gpa << "  " << "Age: " << s.age << endl;
}

int main()
{
   Student s1;
   s1.name = "Shakhawat";
   s1.roll = 76;
   s1.gpa = 8.2;
   s1.age = 17;

   Student s2;
   s2.name = "Sahil";
   s2.roll = 43;
   s2.gpa = 2.5;
   s2.age = 23;

   Student s3;
   s3.name = "Gaba";
   s3.roll = 65;
   s3.gpa = 6.4;
   s3.age = 26;

   print(s1);
   print(s2);
   print(s3);

   cout << s2.name;
}
