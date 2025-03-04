/*
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string numtime;
    getline(cin,numtime);
    istringstream ss(numtime);

    vector<int> vecinput;

    int num;

    while(ss>>num){
        vecinput.push_back(num);
    }

    int number = vecinput[0];
    int times = vecinput[1];

    string strnumber = to_string(number);

    int total = 0;
    for(int i=0; i<strnumber.length(); i++){
        total =total+ strnumber[i]-'0';
    }

    int wholetotal = total*times;
    string strwholetotal = to_string(wholetotal);

    int value(string stringtotal){
        if(strwholetotal.length()>1){
            int total = 0;
            for(int i=0; i<stringtotal.length(); i++){
                total =total+ stringtotal[i]-'0';
            }
            string strtotal = to_string(total);
            value(strtotal);
        }

        else{
            int numberoutputs = stoi(stringtotal)-'0';
            return numberoutputs;
        }
    }

    int finalvalue = value(strwholetotal);
    cout << finalvalue;

}
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int function(string concentationstring){
    if(concentationstring.length()>1){
        int total = 0;
        for(int i=0; i<concentationstring.length(); i++){
            char character = concentationstring[i];
            int integer = character - '0';
            total = total + integer;
        }

        string stringtotal = to_string(total);
        return function(stringtotal);
    }
    else{
        char finalcharacter = concentationstring[0];
        int finalvalue = finalcharacter - '0';
        return finalvalue;
    }
    
}

int main(){
    string input;
    cout<<"Enter the input: ";
    getline(cin, input);
    istringstream ss(input);

    vector<int> vecinput;
    int num;
    while(ss>>num){
        vecinput.push_back(num);
    }

    int number = vecinput[0];
    int times = vecinput[1];

    string strnumber = to_string(number);
    
    string concentationstring = strnumber;

    int count =1 ;
    while(count<times){
        concentationstring.append(strnumber);
        count++;
    }

    int value = function(concentationstring);
    cout<<value;
    

}
