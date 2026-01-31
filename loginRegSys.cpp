#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

bool isUsernametaken(string username)
{
    string u,p;
    ifstream file("userdatabase.txt");
    while(file>>u>>p){
        if(u==username){
            return true;
        }
    }
    return false;
}

string getmaskedpass()
{
    string password;
    char ch;
    while(true){
        ch= _getch();
        if(ch==13){
            break;
        }
        else if(ch==8){
            if(password.length()>0){
                password.pop_back();
                cout<<"\b \b";
            }
        }
        else{
            password=password+ch;
            cout<<"*";
        }
    }
    cout<<endl;
    return password;
}

void registerUser()
{
    string regUser,regPass;
    cout<<"------------SignUp--------------\n\n";
    cout<<"Enter Username: ";
    cin>>regUser;

    if(isUsernametaken(regUser)){
        cout<<"Username already exists! Please try a different one."<<endl;
        return;
    }

    cout<<"\nEnter Password: ";
    regPass = getmaskedpass();

    ofstream file;
    file.open("userdatabase.txt",ios::app);
    file<<regUser<<" "<<regPass<<endl;
    file.close();

    cout<<"\nRegistration Successful!"<<endl;
}

bool userLogin()
{
    string user,pass,u,p;

    cout<<"-------------Login--------------\n\n";
    cout<<"Username: ";
    cin>>user;
    cout<<"Password: ";
    pass = getmaskedpass();

    ifstream file("userdatabase.txt");
    while(file>>u>>p){
        if(u==user && p==pass){
            return true;
        }
    }
    return false;

}

int main(){
    int choice;
    cout<<"-----------------------------"<<endl;
    cout<<"LOGIN AND REGISTRATION SYSTEM"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"1. Register\n2. Login\n3. Exit\n\nSelect Option: ";
    cin>>choice;

    switch(choice){
        case 1:
            registerUser();
            break;
        case 2:
            if(userLogin()){
                cout<<"\nLogin successful! Welcome to your dashboard."<<endl;
            }
            else{
                cout<<"\nInvalid username or password."<<endl;
            }
            break;
        case 3:
            cout<<"Goodbye!"<<endl;
            return 0;
        default:
            cout<<"Invalid selection."<<endl;
    }
    return 0;
}
