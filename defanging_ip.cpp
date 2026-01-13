//suppose if in the question is given---> ip add= 1.12.13.2
//---> output--> 1[.]12[.]13[.]2

#include<iostream>
using namespace std;
int main(){
    string s;
    string result=" ";
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if(s[i]=='.'){
          result=result+"[.]";
        }
          else{
          result=result+s[i];
          }
    }
          cout<<"The ouput is :- "<<result;
          return 0;

}