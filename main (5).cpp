// wap to read the text and xount the number of thimes the word 'it'  comes ;
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter your string: "<<endl;
    getline(cin,str);
    int count =0;
    
    for ( int i=0; i<str.size(); i++){
        if (str[i]=='i' && str[i+1]=='t'){
            count++;
        }
        else {
            continue;
        }
        
    }
     
    cout<<count<<endl;
   
    return 0;
}