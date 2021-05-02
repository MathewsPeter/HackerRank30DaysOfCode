//Day 3: Intro to Conditional Statements

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int data;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if(data%2) 
		printf("Weird");
	else
	{ 
		if(data>=2 && data<=5)  printf("Not Weird");
		if(data>=6 && data<=20) printf("Weird");
		if(data>20) printf("Not Weird");
	}
    return 0;
}
