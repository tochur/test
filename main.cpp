#include<iostream>
#include<string>
using namespace std;

class Info{
    int age;
    string name;
    Info(int age = 20, string name = "Antek"){
        cout<<"Default constructor"<<endl;
    }
    void print(){
        cout<<"Imie: "<<name<<", wiek: "<<age<<endl;
    }
};

int main(){
    cout<<"Antex git test with C++ main"<<endl;
    Info info = Info();

    return 0;
}
