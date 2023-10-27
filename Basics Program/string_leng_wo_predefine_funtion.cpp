#include<iostream>
#include<string>
using namespace std;


int main(){

    string a = "aba";
    int i;
    for(i=0;a[i]!='\0';i++);
    cout<<"Length is "<<a.length();
    
}