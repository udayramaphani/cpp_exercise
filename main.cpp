//Example code to invoke child classes from base class
#include <iostream>
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
	student s("Poorvi", "Cherukupalli", "Indian", 6, 123);
	teacher t("Madhuri", "Cherukupalli", "Indian", 32, 456);
	s.output_identity();
}
