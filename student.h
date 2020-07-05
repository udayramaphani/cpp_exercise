#pragma once

#include <string>
#include "person.h"
using namespace std;

class student : public person {
private:

public:
	student();
	student(string fname, string lname, string race, unsigned int age, unsigned int ph_num);
	virtual ~student();

	virtual void output_identity();
	virtual void output_age();
};
