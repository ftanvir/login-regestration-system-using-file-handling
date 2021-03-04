#include <bits/stdc++.h>
#include <fstream>
using namespace std;

bool LoginReturn() {
    string username, password, usrName, pwd;
    cout<< "Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    ifstream read("C:\\login regestration cpp\\" + username +".txt");  //initializing location
    getline(read, usrName);
    getline(read, pwd);

    if(usrName == username && pwd == password) {
        return true;
    } else{
        return false;
    }
}

int main()
{
    int choice;
    cout<<"1.Register\n2. Login\n Your choice: ";
    cin>>choice;
    if(choice==1) {
        string username, password;
        cout<<"select a username: ";
        cin>>username;
        cout<<"select a password: ";
        cin>>password;

        ofstream newfile;
        newfile.open("C:\\login regestration cpp\\" + username + ".txt"); //initializing location
        newfile<<username <<endl <<password;
        newfile.close();

        main();
    }
    else if (choice == 2) {
        bool check = LoginReturn();

        if(!check) {
            cout<<"You're not registered yet!!First register"<<endl;
            system("PAUSE");
            return 0;           

        } else {

            cout<<"Successful Login!!"<<endl;
            system("PAUSE");
            return 1;
        }
    } else {
        cout<<"invalid choice"<<endl;
        main();
    }

}