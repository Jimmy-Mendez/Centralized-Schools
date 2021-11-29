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
  vector<string> data1, data2;

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
	data1.push_back(input);
  }

  //write names to file
  output << "Students:\n";
  for (int i = 0; i < num1; i++)
  {
    output << data1[i] << "\n";
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
	  data2.push_back(input);
	  cin >> input;
  }

  //write school names to file
  output << "Schools:\n";
  for (int i = 0; i < num1; i++)
  {
    output << data2[i] << "\n";
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
    vector<string> outcome = students;
    switch(algo)
    {
      case "Boston":
    // code block
      break;
      case "DA":
    // code block
      break;
      case "TTC":
    // code block
      break;
      default:
    // code block
    }
    return outcome;
}

//Boston

//Deferred Acceptance

//Top Trading Cycles
