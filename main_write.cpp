#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ofstream file;
  string sname;
  int score1, score2, N;
  cin >> N;
  file.open("Students.txt");
  if (!file.is_open()){
    cerr << "Error opening file!" << endl;
    return 1;
  }
  file << N << endl;
  for (int i=0; i<N; i++){
    cin >> sname >> score1 >> score2;
    file << sname << " " << score1 << " " << score2 << endl;

  }
    return 0;
}
