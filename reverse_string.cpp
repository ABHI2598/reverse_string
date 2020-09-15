#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(string ::reverse_iterator itr = str.rbegin(); itr !=str.rend();itr++){
        cout<<*itr;
    }
    return 0;
}
