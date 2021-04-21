#include <iostream>

using namespace std;

/*Harvy Jones Pontillas DICT 1-2*/
int main()
{
    //declare variables
    char letterGrade;

    //input items
    cout << "ENTER LETTER GRADE: ";
    cin >> letterGrade;
    cout << "\n";

    //condition, total amount owed computation, and output
    if(letterGrade=='A')
    {
        cout << "EXCELLENT";
    }
    else if(letterGrade=='B')
    {
        cout << "ABOVE AVERAGE";
    }
    else if(letterGrade=='C')
    {
        cout << "AVERAGE";
    }
    else if(letterGrade=='D')
    {
        cout << "BELOW AVERAGE";
    }
    else if(letterGrade=='F')
    {
        cout << "FAILED";
    }
    else
    {
        cout << "ERROR!";
    }
    cout << endl;
    return 0;
}
