#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the size of the arra: ";
    int sizeofarray;
    cin>>sizeofarray;
    cin.ignore();
    cout<<"Enter the array: ";
    string array;
    getline(cin,array);
    istringstream ss(array);

    vector<int> inputarray;
    
    int num;
    while(ss>>num){
        inputarray.push_back(num);
    }

    vector<int> equal;
    vector<int> left;
    vector<int> right;
    vector<vector<int>> whole;

    int pivot = inputarray[0];
    equal.push_back(pivot);
    
    for(int i=1; i<sizeofarray; i++){
        if(pivot>inputarray[i]){
            left.push_back(inputarray[i]);
        }

        else if(pivot<inputarray[i]){
            right.push_back(inputarray[i]);
        }
    }

    whole.push_back(left);
    whole.push_back(equal);
    whole.push_back(right);

    for(int i=0; i<3; i++){
        for(int ele: whole[i]){
            cout<<ele<<" ";
        }
    }


}
