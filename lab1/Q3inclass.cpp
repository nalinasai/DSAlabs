//if the input is like a string format

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string inputstr;
    cout<<"enter the integers with space: ";
    getline(cin,inputstr);

    istringstream ss(inputstr);
    vector <int> numbers;

    int num;
    while(ss>>num){
        numbers.push_back(num);
    }

    int total =0;
    for(int value: numbers){
        total=total+value;
    }
    cout<<total;

    
}