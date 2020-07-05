#pragma once

#include <string>
#include "person.h"
using namespace std;

class teacher : public person {
private:

public:
	teacher();
	teacher(string fname, string lname, string race, unsigned int age, unsigned int ph_num);
	virtual ~teacher();

	virtual void output_identity();
	virtual void output_age();
};
