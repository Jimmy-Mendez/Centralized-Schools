#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref);


int main(){
  int num1, num2;
  vector<string> data1, data2, data3, data4;
  cout<<"Enter number of students"<<endl;
  cin>>num1;
  cout<<"Enter students in order"<<endl;
  
  for (int i = 0; i < num1; i++) 
  {
	string input;
	data1.push_back(input);
	cin >> input;
  }
  for(int j= 0; j < num1; j++)
  {
    cout<<data1[j]<<endl;
  }
  // cout<<"Enter the data for the student preferences in the following format: \n student \t choice 1 \t choice 2 \t...\t choice n \t"<<endl;
  // cin>>data2;
  // cout<<"Enter schools in order"<<endl;
  // cin>>data3;
  // cout<<"Enter the data for the school preferences in the following format: \n student \t choice 1 \t choice 2 \t...\t choice n \t"<<endl;
  // cin>>data4;
  // cout<<"The outcome is: " << match(data1, data2,data3,data4) << endl;;
   return 0;
}

vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref)
{
	//use vectors to match using some mechanism
    vector<string> outcome = students;
    return outcome;
}

