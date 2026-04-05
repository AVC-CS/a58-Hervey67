#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream ifs;
  string sname;
  int score1, score2, sum;
  double avg;
  ifs.open("Students.txt");
  if (!ifs.is_open()){
    cerr << "Error opening file!";
    return 1;
  }
  ifs >> N;
  for(int i=0l i<N; i++){
    ifs >> sname >> score1 >> score2;
    sum = score1 + score2;
    avg = sum / 2.0;
    cout << sname << " " << avg << endl;
  }

    // TODO: open "students.txt" for reading

    // TODO: check if file opened successfully; print error and exit if not

    // TODO: read M from ifs, print "Total M students" 
    ifs.close();
    return 0;
}
