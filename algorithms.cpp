#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;
vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref, string algo);


int main(){
  int num1, num2;
  ofstream output;
  output.open ("output.txt");
  vector<string> student_names, school_names;
  vector<vector<string>> student_pref,school_pref;

  //get students

  //get number of students
  cout<<"Enter number of students"<<endl;
  cin>>num1;

  //get names of students
  cout<<"Enter students in order"<<endl;

  // insert names to vector
  for (int i = 0; i < num1; i++)
  {
	string input;
  cin >> input;
	student_names.push_back(input);
  }

  //write names to file
  output << "Students:\n";
  for (int i = 0; i < num1; i++)
  {
    output << student_names[i] << "\n";
  }

  // Get schools

  //get number of schools
  cout << "Enter number of schools" << endl;
  cin >> num2;

  //get names of schools
  cout << "Enter schools in order" << endl;

  //insert items into vector
  for (int i = 0; i < num2; i++)
  {
	  string input;
	  school_names.push_back(input);
	  cin >> input;
  }

  //write school names to file
  output << "Schools:\n";
  for (int i = 0; i < num1; i++)
  {
    output << school_names[i] << "\n";
  }

  bool trunc;
  int max;

  cout<<"Is the list truncated? (0 for no, 1 for yes)\n";
  cin>>trunc;
  if(trunc==0)
  {

    cout<<"max list length: ";
    cin>>max;
  }

  for(int i = 0;i<num1;i++)
  {
    int num;
    cout<<"Enter "<<student_names[i]<<"\'s school preferences: \n";
    if(trunc==1)
    {
      num = max;
    }
    else
    {
      num = school_names.size();
    }

  }

  string a;
  cin>>a;

  //close output file
   output.close();
   return 0;
}

//In here put switch statement for corresponding algo
vector<string> match(vector<string> students, vector<string> student_pref, vector<string> schools, vector<string> school_pref, string algo)
{
	//use vectors to match using some mechanism
  char algo_char = algo[0];
    vector<string> outcome = students;
    switch(algo_char)
    {
      case 'B':
          cout<<"Hi";
      break;
      case 'D':
          cout<<"Hi";
      break;
      case 'T':
          cout<<"Hi";
      break;
      default:
          cout<<"Hi";
  }
    return outcome;
}

//Boston

//Deferred Acceptance

//Top Trading Cycles
