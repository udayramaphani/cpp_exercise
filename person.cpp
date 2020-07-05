#include "person.h"

person::person(){
}

person::person(string fname, string lname, string race, unsigned int age, unsigned int ph_num):
	first_name_(fname), last_name_(lname), race_(race), age_(age), phone_num_(ph_num)
{
}

person::~person(){
	cout << "Exiting from person class" << endl;
}

void person::output_age(){
	cout << "I am Person class" << endl;
	cout << "I am " << this->age_ << " years old" << endl;
}
