#include <iostream>
#include <cstdlib>
#include <thread>

using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    int r = rand() % 100 + 1;

    for(int i = 1; i <= 7; i++)
    {
        cout << "Guess the number (1-100): " << endl;
        int g;
        cin >> g;

        if(g == r)
        {
            cout << "Correct!" << endl;
            this_thread::sleep_for(chrono::milliseconds(2000));
            return 0;
        }
        else if (i < 6)
            {
                if(g < r)
                {
                    cout << "Wrong! The number is higher. You have " << (7-i) << " guesses left" << endl;
                }
                else
                {
                    cout << "Wrong! The number is lower. You have " << (7-i) << " guesses left" << endl;
                }
            }
            else if (i >= 6)
            {
                if(g < r)
                {
                    cout << "Wrong! The number is higher. You have 1 guess left" << endl;
                }
                else
                {
                    cout << "Wrong! The number is lower. You have 1 guess left" << endl;
                }
            }
    }

    cout << "You have run out of tries. " << "The number was " << r << ", Do you want to play again? (y/n)" << endl;
    char response;
    cin >> response;
    if(response == 'y')
    {
        main();
    }
    else
    {
        return 0;
    }

    return 0;
}