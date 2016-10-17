#include<iostream>
#include "student.h"
#include <sstream>

using namespace std;

int main(){

	freopen("input2.txt","r",stdin);

	string s;
	stringstream ss;
	
        int i = 0;
        student x[100];

	while(getline(cin,s)){
	        ss << s;
       	        ss >> x[i].sname >> x[i].name >>x[i].gpa;
       	        ss.clear();
		i++;
	}


	for(int a = 0; a < i - 1; ++a){
		for(int b = a + 1; b < i; ++b){
			if(x[a].sname > x[b].sname){
				swap(x[a],x[b]);
			}	
		}
	}

	for(int a = 0; a < i; ++a){
		cout << x[a].name << " " << x[a].sname << " " << x[a].gpa << endl;
	}



	return 0;
}
