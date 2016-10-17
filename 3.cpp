#include<iostream>
#include "student.h"

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	student s[n];
	double avg = 0;


	for(int i = 0; i < n; ++i){
		cin >> s[i].name >> s[i].sname >> s[i].gpa;
		avg += s[i].gpa;
	}

	avg = avg/n;

	cout << avg;

	return 0;
}

