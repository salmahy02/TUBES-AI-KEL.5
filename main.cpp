#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Salma and Safira"<<endl;
        string phrase = "Good Morning Salma and Safira";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Salma and Safira"<<endl;
        string phrase = "Good Afternoon Salma and Safira";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Salma and Safira"<<endl;
        string phrase = "Good Evening Salma and Safira";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout<<"\t<--------------------  PERSONAL ASSISSTANT --------------------"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        system("cls");
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM YOU ARE SALMA AND SAFIRA|"<<endl;
        cout<<"---------------------------------------------------------"<<endl<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE SALMA AND SAFIRA";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="00")
        {
            system("cls");
            cout<<"\n<******************************>\n";
            greetings();
            do{
                cout<<"\n<*****************************>\n";
                cout<<endl<<"I'm SAFA Assistant, how can i help you?"<<endl<<endl;

                string phrase = "I'm SAFA Assistant, how can i help you?";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    system("cls");
                    cout<<"Hello Miss....."<<endl;
                    string phrase = "Hello Salma and Safira";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {
                    system("cls");
                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    system("cls");
                    cout<<"I'm a personal assistant created by Salma and Safira !!!"<<endl;
                    string phrase = "I'm a personal assistant created by Salma and Safira !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open notepad")
                {
                    system("cls");
                    cout<<"openining notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }


                else if(command=="open Microsoft Excel")
                {
                    system("cls");
                    cout<<"opening Microsoft Excel"<<endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Word")
                {
                    system("cls");
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Power Point")
                {
                    system("cls");
                    cout<<"opening Microsoft Power Point"<<endl;
                    string phrase = "opening Microsoft Power Point";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="play music")
                {
                    system("cls");
                    cout<<"playing music now"<<endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     ShellExecute(NULL,"open","Glimpse_of_Us.mp3",NULL, NULL, SW_NORMAL);

                }

                else if(command=="open google")
                {
                    system("cls");
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    system("cls");
                    cout<<"openining YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    system("cls");
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    system("cls");
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","ittlkompwt.jpg",NULL, NULL, SW_NORMAL);
                }


                else if(command=="open video")
                {
                    system("cls");
                    cout<<"opening video"<<endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:Users\\sucia\\Documents\\KULIAH\\dance\\Aespa_Karina_Bola_Rebola.mp4",NULL, NULL, SW_NORMAL);
                }

                else if(command=="bye" || command=="exit")
                {
                    system("cls");
                    cout<<"Good Bye Salma and Safira, see you soon!"<<endl;
                    string phrase = "Good Bye Salma and Safira, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    system("cls");
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<--------------------  PERSONAL ASSISSTANT -------------------->"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
