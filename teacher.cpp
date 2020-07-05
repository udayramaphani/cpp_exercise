#include <iostream>
#include "teacher.h"

teacher::teacher(){
}

teacher::teacher(string fname, string lname, string race, unsigned int age, unsigned int ph_num)
	:person(fname,lname,race,age,ph_num){
}

teacher::~teacher(){
	cout << "Exiting from teacher class" << endl;
}

void teacher::output_identity(){
	cout << "I am a teacher" << endl;
}

void teacher::output_age(){
	cout << "I am a teacher" << endl;
	person::output_age();
}
