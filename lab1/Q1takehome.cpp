#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of ana array: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter the integers with spaces: ";
    string inputstr;
    getline(cin,inputstr);
    istringstream ss(inputstr);

    vector<int> numbers;
    int num;
    while(ss>>num){
        numbers.push_back(num);
    }

    vector<int> numberreverse;
    for(int i=n-1; i>=0; i--){
        numberreverse.push_back(numbers[i]);
    }

    for(int ele: numberreverse){
        cout<<ele<<" ";
    }
    
}