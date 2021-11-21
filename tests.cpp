#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref);


int main(){
  int num1, num2;
  vector<string> data1, data2;

  //get students
  cout<<"Enter number of students"<<endl;
  cin>>num1;
  cout<<"Enter students in order"<<endl;

  for (int i = 0; i < num1; i++)
  {
	string input;
	data1.push_back(input);
	cin >> input;
  }
  for(auto j: data1)
  {
    cout<<j<<endl;
  }

  // Get schools
  cout << "Enter number of schools" << endl;
  cin >> num2;
  cout << "Enter schools in order" << endl;

  for (int i = 0; i < num2; i++)
  {
	  string input;
	  data2.push_back(input);
	  cin >> input;
  }
  for (int j = 0; j < num2; j++)
  {
	  cout << data2[j] << endl;
  }
   return 0;
}

vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref)
{
	//use vectors to match using some mechanism
    vector<string> outcome = students;
    return outcome;
}
