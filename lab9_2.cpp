#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double grade){
      if(grade>90){
      return 'A';
  }
  else if(grade>75&&grade<=90){
      return 'B'; 
  }
  else if(grade>60&&grade<=75){
      return 'C';
  }
  else if(grade>45&&grade<=60){
      return 'D';
  }
  else if(grade<=45){
      return 'F';
  }
  return 0;
}

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
	    getline (cin , name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
