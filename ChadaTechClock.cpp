#include <iostream>
#include <time.h>
#include <stdlib.h>

/* -- title: Chada Tech Clock --
   -- author: Ricardo Reyes --
   -- date: 01/22/2023 --
   -- version: 1.0 --
*/
using namespace std;

// Hour function
void AddHour(int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
    if (clock12Hour2 < 10) {
        clock12Hour2 = clock12Hour2 + 1;
    }
    if (clock12Hour2 == 10) {
        clock12Hour1 = 1;
        clock12Hour2 = 0;
    }
    if (clock12Hour1 == 1 && clock12Hour2 == 3) {
        clock12Hour1 = 0;
        clock12Hour2 = 1;
    }
    if (clock24Hour2 < 10) {
        clock24Hour2 = clock24Hour2 + 1;

    }
    if (clock24Hour1 == 1 && clock24Hour2 == 10) {
        clock24Hour1 = 2;
        clock24Hour2 = 0;
    }
    if (clock24Hour2 == 10) {
        clock24Hour2 = 0;
        clock24Hour1 = 1;
    }
    if (clock24Hour1 == 2 && clock24Hour2 == 4) {
        clock24Hour1 = 0;
        clock24Hour2 = 0;
    }
}

// Minute Function
void AddMinute(int& minute1, int& minute2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
    if (minute2 < 10) {
        minute2 = minute2 + 1;
    }
    if (minute1 == 5 && minute2 == 10) {
        minute1 = 0;
        minute2 = 0;

        if (clock12Hour2 < 10) {
            clock12Hour2 = clock12Hour2 + 1;
        }
        if (clock12Hour1 == 1 && clock12Hour2 == 3) {
            clock12Hour1 = 0;
            clock12Hour2 = 1;

        }
        if (clock24Hour2 < 10) {
            clock24Hour2 = clock24Hour2 + 1;
        }
        if (clock24Hour1 == 1 && clock24Hour2 == 10) {
            clock24Hour1 = 2;
            clock24Hour2 = 0;
        }
        if (clock24Hour1 == 2 && clock24Hour1 == 4) {
            clock24Hour1 = 0;
            clock24Hour2 = 0;
        }

    }
    if (minute1 == 4 && minute2 == 10) {
        minute1 = 5;
        minute2 = 0;
    }
    if (minute1 == 3 && minute2 == 10) {
        minute1 == 4;
        minute2 = 0;
    }
    if (minute1 == 2 && minute2 == 10) {
        minute1 = 3;
        minute2 = 0;
    }
    if (minute1 == 1 && minute2 == 10) {
        minute1 = 2;
        minute2 = 0;
    }
    if (minute2 == 10) {
        minute1 = 1;
        minute2 = 0;
    }
}

//seconds function
void AddSecond(int& second1, int& second2, int& minute1, int& minute2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
    if (second2 < 10) {
        second2 = second2 + 1;
    }
    if (second1 == 5 && second2 == 10) {
        second1 = 0;
        second2 = 0;

        if (minute2 < 10) {
            minute2 = minute2 + 1;
        }

        if (minute1 == 5 && minute2 == 10) {
            minute1 = 0;
            minute2 = 0;

            if (clock12Hour2 < 10) {
                clock12Hour2 = clock12Hour2 + 1;
            }

            if (clock12Hour2 == 10) {
                clock12Hour1 = 1;
                clock12Hour2 = 0;
            }
            if (clock12Hour1 == 1 && clock12Hour2 == 3) {
                clock12Hour1 = 0;
                clock12Hour2 = 1;
            }
            if (clock24Hour2 < 10) {
                clock24Hour2 = clock24Hour2 + 1;
            }
            if (clock24Hour1 == 1 && clock24Hour2 == 10) {
                clock24Hour1 = 2;
                clock24Hour2 = 0;
            }
            if (clock24Hour2 == 10) {
                clock24Hour2 = 0;
                clock24Hour1 = 1;
            }
            if (clock24Hour1 == 2 && clock24Hour2 == 4) {
                clock24Hour1 = 0;
                clock24Hour2 = 0;
            }
        }
        if (minute1 == 4 && minute2 == 10) {
            minute1 = 5;
            minute2 = 0;
        }
        if (minute1 == 3 && minute2 == 10) {
            minute1 = 4;
            minute2 = 0;
        }
        if (minute1 == 2 && minute2 == 10) {
            minute1 = 3;
            minute2 = 0;
        }
        if (minute1 == 1 && minute2 == 10) {
            minute1 = 2;
            minute2 = 0;
        }
        if (minute2 == 10) {
            minute1 = 1;
            minute2 = 0;
        }
    }
    if (second1 == 4 && second2 == 10) {
        second1 = 5;
        second2 = 0;
    }
    if (second1 == 3 && second2 == 10) {
        second1 = 4;
        second2 = 0;
    }
    if (second1 == 2 && second2 == 10) {
        second1 = 3;
        second2 = 0;
    }
    if (second1 == 1 && second2 == 10) {
        second1 = 2;
        second2 = 0;
    }
    if (second2 == 10) {
        second1 = 1;
        second2 = 0;
    }
}


int main(){
    int userInput;
    string options;

    //clock output
    int clock12Hour1 = 1;
    int clock12Hour2 = 2;
    int clock24Hour1 = 0;
    int clock24Hour2 = 0;
    int minute1 = 5;
    int minute2 = 9;
    int second1 = 5;
    int second2 = 9;
    char colon1 = ':';
    char colon2 = ':';
    string ampm = "A M";

    system("CLS");

    cout << "**************************\t" << "***************************" << endl;
    cout << "*    12-Hour Clock       *\t" << "*      24-Hour Clock      *" << endl;
    cout << "*    " << clock12Hour1 << clock12Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " " << ampm << "       *\t"
        << "        " << clock24Hour1 << clock24Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << "         *" << endl;
    cout << "***************************\t" << "***************************" << endl;
    cout << endl;

    do {
        cin >> options;
        if (options == "Options") {
            //Menu
            cout << "\t\t**************************" << endl;
            cout << "\t\t*   1-Add One Hour       *" << endl;
            cout << "\t\t*   2-Add One Minute     *" << endl;
            cout << "\t\t*   3-Add One Second     *" << endl;
            cout << "\t\t*   4-Exit Program       *" << endl;
            cout << "\t\t**************************" << endl;

            // options menu executions.
            cin >> userInput;
            switch (userInput) {
                case 1:
                    // options menu option 1
                    AddHour(clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                    cout << "**************************\t" << "**************************" << endl;
                    cout << "*    12-Hour Clock        \t" << "*     24-Hour Clock      *" << endl;
                    cout << "*    " << clock12Hour1 << clock12Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << ampm << "        *\t"
                        << "*   " << clock24Hour1 << clock24Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << endl;
                    cout << "***************************\t" << "**************************" << endl;
                    cout << endl;
                    break;
                case 2:
                    // options menu option 2
                    AddMinute(minute1, minute2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                    cout << "**************************\t" << "**************************" << endl;
                    cout << "*      12-Hour Clock     *\t" << "*      24-Hour Clock     *" << endl;
                    cout << "*      " << clock12Hour1 << clock12Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << ampm << "           *\t"
                        << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << endl;
                    cout << "**************************\t" << "************************" << endl;
                    cout << endl;
                    break;
                case 3:
                    // options menu option 3
                    AddSecond(second1, second2, minute1, minute2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                    cout << "**************************\t" << "**************************" << endl;
                    cout << "*    12-Hour Clock       *\t" << "*     24-Hour Clock      *" << endl;
                    cout << "*    " << clock12Hour1 << clock12Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << ampm << "         *\t"
                        << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minute1 << minute2 << colon2 << second1 << second2 << " "
                        << endl;
                    cout << "*************************\t" << "*************************" << endl;
                    cout << endl;
                    break;
                case 4:
                    // options menu option 4 this exits the program
                    return EXIT_SUCCESS;
                    break;
                default:
                    break;
            }
        }
        else {
            return EXIT_SUCCESS;
        }
    } while (options != "q");

    return 0;
}
