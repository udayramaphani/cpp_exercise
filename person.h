#pragma once

#include <iostream>
#include <string>

using namespace std;

class person
{
private:
	string first_name_;
	string last_name_;
	string race_;
	unsigned int age_;

protected:
	unsigned int phone_num_;

public:
	person();
	person(string fname, string lname, string race, unsigned int age, unsigned int ph_num);
	virtual ~person();
	virtual void output_identity() = 0;
	virtual void output_age();
};
