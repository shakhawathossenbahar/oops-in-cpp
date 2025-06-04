#include <iostream>
using namespace std;

class Cricketer
{
public:
   string name;
   int run;

   Cricketer(string name, int run)
   {
      this->name = name; // for using same name - this keyword should be used
      this->run = run;
   }

   void print()
   {
      cout << "Name: " << name << "  " << "Run: " << run << endl;
   }
};

int main()
{
   Cricketer c1("Virat Kohli", 25000);
   // c1.name = "Virat Kohli";
   // c1.run = 25000;

   Cricketer c2("Rohit Sharma", 18000);

   c1.print();
   c2.print();

   return 0;
}