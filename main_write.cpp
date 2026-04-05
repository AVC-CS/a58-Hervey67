#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ofstream file;
  string sname;
  int N;
  double score1, score2; 

  file.open("Students.txt");

  if (!file.is_open()){
    cerr << "Error opening file!" << endl;
    return 1;
  }
  cout << "Enter the total number of students";

  cin >> N; 
  file << N << endl;

  for (int i=0; i<N; i++){
    cout << "Enter student name and two scores; "; 
    cin >> sname >> score1 >> score2;
    file << sname << " " << score1 << " " << score2 << endl;

  }
    file.close();
    return 0;
}
