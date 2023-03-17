#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number ;
    } while (Number <= 0);

    return Number;
}


void PrintInvertedLetter(int Number)
{
    cout << endl;

    for (int i = 65 + Number -1; i >= 65 ; i --)
    {
        for (int j = 1 ; j <= (Number - (65 + Number - 1 -i)); j ++)
        {
            cout << char (i);
        }
        cout << endl;
    }
}
void PrintPatterLetter(int Number )
{
    for (int i = 65 ; i < 65 + Number ; i++)
        {
            for (int j = 1; j <= (Number - (65 + Number -1 - i)) ; j++)
                                //(3 - (65 +3 -1 - 67)) = (3 -(68- 67)) = 2
                {
                    cout << char(i);
                }
            cout << endl;
        }

}



int main ()
{
    PrintPatterLetter(ReadPositiveNumber("Please Enter Positive Number ?"));
    return 0;

}
