#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream ifs;
  string sname;
  int N;
  double score1, score2, sum, avg;
  ifs.open("Students.txt");
  if (!ifs.is_open()){
    cerr << "Error opening file!";
    return 1;
  }
  ifs >> N;
  cout << "Total " << N << " " << endl; 

  for(int i=0; i<N; i++){
    ifs >> sname >> score1 >> score2;
    sum = score1 + score2;
    avg = sum / 2.0;
    cout << "Student Name: " <<  sname << " score1: " << score1 << " score2: " << score2 << " Sum: " << sum << " Avg: " << avg << endl;
  }

    // TODO: open "students.txt" for reading

    // TODO: check if file opened successfully; print error and exit if not

    // TODO: read M from ifs, print "Total M students" 
    ifs.close();
    return 0;
}
