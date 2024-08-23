#include <iostream>;

using namespace std;

int main()
{
    char section{};
    do
    {
        cout << "\n--------------------" << endl;
        cout << "1.For C++" << endl;
        cout << "2.For JAVA" << endl;
        cout << "3.C#" << endl;
        cout << "Q, Quit" << endl;
        cout << "\nEnter your section" << endl;
        cin >> section;

        if (section == '1')
        {
            cout << "Your code 1- C++" << endl;
        }
        else if (section == '2')
        {
            cout << "Your code 2- Java" << endl;
        }
        else if (section == '3')
        {
            cout << "Your code 2- C#" << endl;
        }
        else if(section == 'Q' || section == 'q'){
            cout << "Goodbye" << endl;
        }else{
            cout << "Unknow comand" << endl;
        }

    } while (section != 'q' && section != 'Q');

    cout << endl;
    return 0;
};