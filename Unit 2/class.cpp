#include <iostream>
using namespace std;

class Student
{
	private:
		int roll_no = 3;
		void displyp()
		{
			cout<<"Roll Number \n"<<roll_no<<"\n";
		}
		
	public :
		string Name = "abc";
		string add = "xys";
		void display()
		{
			cout<<"Name = "<<Name;
			cout<<"Address = "<<add;
			displyp();
		}
};
int main(){
	Student a;
	
	a.display();
	
	return 0;
	
}

/* 
This C++ program defines a class 
Student and demonstrates how to use access 
specifiers (private and public) in object-oriented programming

*/

