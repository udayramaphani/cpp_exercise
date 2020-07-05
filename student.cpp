#include <iostream>
#include "student.h"

student::student(){
}

student::student(string fname, string lname, string race, unsigned int age, unsigned int ph_num)
	:person(fname,lname,race,age,ph_num){
}

student::~student(){
	cout << "Exiting from student class" << endl;
}

void student::output_identity(){
	cout << "I am a student" << endl;
}

void student::output_age(){
	cout << "I am a student" << endl;
	person::output_age();
}
