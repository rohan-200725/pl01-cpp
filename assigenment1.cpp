#include<iostream>
using namespace std;

class Student
{
 public;
 int roll_num;
 string name;
 float marks;

 void Accept() 
 {

   cout<<"enter roll number:"<<endl;
   cin>>roll num;
   cout<<" ENTER YOUR MARKS:"<<endl;
   cin>>marks ;

 }

 void Result() 
 {
   if ( marks>=40) 
     {
        cout <<" Result : pass " << endl;
     }
   else 
     {
        cout << " Result : fail " << endl
            }	
 void display() 
 {
	cout << ".... display result......" << endl;
	cout <<" ROLL number ; " << roll_num << endl;
 	cout<<" Name:" << name<< endl;
	cout<<" Marks:"<marks<< endl;
	Result();
 }

int main()
{
  Student s;
  s.accept();
  s.display();
  return 0;
}
