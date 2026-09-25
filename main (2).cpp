//  WAP to replace blank space with underscore in cpp

#include <iostream>
using namespace std;

int main()
{ string str;
cout<<"enter your string: "<<endl;
getline(cin,str);

for (int i=0; i<str.size(); i++){
    if (str[i]==' '){
        str[i]='_';
    }
}
cout<<str<<endl;


 
    return 0;
}