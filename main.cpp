#include <bits/stdc++.h>
#include <windows.h>
# include "mainsource.h"

using namespace std;
int cnt;
string Id1;
string password1;
void check()
{
    string Id = "Chuminjae"; // can change the Id by putting in new Id;
    string password =  "123456"; // can change the password by putting in new password;
    int cnt;
    string Id1;
    string password1;

    while (cnt <= 2){
        cout << "\n\n\n\n\n\n\n\n\n" <<"Please enter you Id and password" << "\n";
        cout << "\n"<< "                              Id" << "    ";
        getline(cin , Id1);
        cout << "                              password" <<"   ";
        getline(cin , password1);
        Sleep(1000);
        system("cls");

         if(Id == Id1 && password == password1){
            cout << "log-in succeed" << "\n";
            cout << "Welcome      " <<  "***" << Id << "***";
            Sleep(2000);
            system("cls");
            mainmenu();
        }
        else if((Id == Id1 && password != password1) ){
        cout << "log-in fail" << "\n";
        cout << "password is incorrect";
        Sleep(2000);
        system("cls");
        cnt ++;
        }
        else if((Id != Id1 && password != password1) ){
        cout << "log-in fail" << "\n";
        Sleep(2000);
        system("cls");
        cnt ++;
        }


    }
    if(cnt > 2){
        cout << "Too many attempt shut down program" << "\n";
        for(int i = 1; i < 6; i++){
            cout << i << "\n";
            Sleep(1000);
        }
        system("cls");
    }

}
int main(){
    SetConsoleTitle("Student information");
    system("color A1");

    check();
    return 0;


    }
