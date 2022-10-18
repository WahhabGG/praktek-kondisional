#include<iostream>

using namespace std;

int main(){
	
	int nilai;
	cout<<"input nilai matakuliah: ";
	cin>>nilai;
	
	if (nilai >=85 && nilai <=100) {
		cout<<"\nLULUS";
		cout<<"\nGRADE A"; 
	}
	if (nilai >=75 && nilai < 85) {
		cout<<"\nLULUS";
		cout<<"\nGRADE B";
	}
	if (nilai >=60 && nilai < 75) {
		cout<<"\nLULUS";
		cout<<"\nGRADE C";
	}
	if (nilai >=45 && nilai < 60) {
		cout<<"\nGAGAL";
		cout<<"\nGRADE D";
	}
	if (nilai >=0 && nilai < 45) {
		cout<<"\nGAGAL";
		cout<<"\nGRADE E";
	}
	if (nilai < 0 || nilai > 100) {
	 cout<<"\nInput nilai antara 0-100";	
	}  return 0;	
}