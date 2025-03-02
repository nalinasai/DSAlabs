#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the integers with spaces: ";
    string inputstring;
    getline(cin, inputstring);

    istringstream ss(inputstring);

    vector<int> vecinputinteger;
    int num;
    while(ss>>num){
        vecinputinteger.push_back(num);
    }

    int n = vecinputinteger.size();

    bool swapped;
    for(int i=0; i<n; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(vecinputinteger[j]>vecinputinteger[j+1]){
                swap(vecinputinteger[j],vecinputinteger[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int element: vecinputinteger){
        cout<<element<<" ";
    }

}