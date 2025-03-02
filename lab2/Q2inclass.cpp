#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter the integers with space: ";
    string inputstring;
    getline(cin,inputstring);
    istringstream ss(inputstring);

    vector<int> vecintegers;
    int num;
    while(ss>>num){
        vecintegers.push_back(num);
    }

    int n = vecintegers.size();

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(vecintegers[j]>vecintegers[j+1]){
                int key = vecintegers[j];
                vecintegers[j] = vecintegers[j+1];
                vecintegers[j+1] = key;
            }

        }
    }

    for(int element: vecintegers){
        cout<<element<<" ";
    }
}