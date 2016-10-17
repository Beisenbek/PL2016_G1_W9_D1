#include<iostream>
#include "student.h"

using namespace std;

int main(){

	freopen("input2.txt","r",stdin);

	int n = 0;

	student s[1000];

	double avg = 0;


	while(true){
		cin >> s[n].name >> s[n].sname >> s[n].gpa;
		if(s[n].name == "==="){
			break;
		}
		avg += s[n].gpa;
		n++;
	}

	avg = avg/n;

	cout << avg;

	return 0;
}

