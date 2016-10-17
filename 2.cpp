#include<iostream>
#include "student.h"

using namespace std;
                   
int main(){

	student s,t;
	s.sname = "Omarov";
	s.name = "Saken";
	s.gpa = 4.0;


	t.sname = "Omarova";
	t.name = "Saniya";
	t.gpa = 3.5;

	
	double avg = (s.gpa + t.gpa)/2;

	cout << avg;


	return 0;
}

