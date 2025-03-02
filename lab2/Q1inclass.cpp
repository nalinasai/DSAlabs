//insertion sort
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string inputstring;
    cout<<"Enter the integers with spaces: ";
    getline(cin,inputstring);
    
    istringstream ss(inputstring);

    vector<int> vecintegers;

    int num;
    while(ss>>num){
        vecintegers.push_back(num);
    }

    for(int i=1; i<vecintegers.size(); i++){
        int key = vecintegers[i];
        int j=i-1;
        while(j>=0 && key<vecintegers[j]){
            vecintegers[j+1] = vecintegers[j];
            j--;
        }
        vecintegers[j+1] = key;
    }

    for(int k=0; k<vecintegers.size(); k++){
        cout<<vecintegers[k] <<" ";
    }

}