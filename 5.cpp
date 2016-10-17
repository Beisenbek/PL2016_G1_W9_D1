#include<iostream>
#include "student.h"
#include <sstream>

using namespace std;

int main(){

	freopen("input2.txt","r",stdin);

	string s;
	stringstream ss;
	
        double avg = 0;
        int i = 0;
        student x[100];

	while(getline(cin,s)){
	        ss << s;
       	        ss >> x[i].sname >> x[i].name >>[i] x.gpa;
       	        ss.clear();
		avg += x[i].gpa;
		i++;
	}


	cout << avg/i;

	return 0;
}

