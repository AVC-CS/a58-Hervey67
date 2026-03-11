#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // === Part 1: Write student data to students.txt ===
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    // TODO: open "students.txt" for writing
    ofs.open("students.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    cout << "Enter the total number of students:";
    // TODO: read N from cin, write N to ofs
    cin >> N;
    ofs << N << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter the student name and two scores: ";
        // TODO: read stuName, score1, score2 from cin; write them to ofs
        cin >> stuName >> score1 >> score2;
        ofs << stuName << "\t" << score1 << "\t" << score2 << endl;
    }
    // TODO: close ofs
    ofs.close();

    // === Part 2: Read student data from students.txt and print stats ===
    int M;
    double sum, avg;
    ifstream ifs;

    // TODO: open "students.txt" for reading
    ifs.open("students.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    // TODO: read M (total students) from ifs, print "Total M students"
    if (ifs >> M)
        cout << "Total " << M << " students\n";
    else
    {
        cout << "Read Error for the number of students\n";
        exit(0);
    }

    for (int i = 0; i < M; i++)
    {
        // TODO: read stuName, score1, score2 from ifs
        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        // TODO: print "Student Name: <name>  score1: <s1>  score2: <s2>  Sum: <sum>  Avg: <avg>"
        if (ifs >> stuName >> score1 >> score2)
        {
            cout << "Student Name: " << stuName << "\t";
            cout << "score1: " << score1 << "\tscore2: " << score2;
            sum = score1 + score2;
            avg = sum / 2.0;
            cout << "\tSum: " << sum << "\tAvg: " << avg << endl;
        }
    }
    ifs.close();

    return 0;
}
