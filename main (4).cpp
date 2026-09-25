// wap to read the text and xount the number of thimes the word 'it'  comes ;

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0;
    while(s.find("it")!=string::npos){
        s.erase(s.find("it"),2);
        count++;
    }
    cout<<count<<endl;
    return 0;
}