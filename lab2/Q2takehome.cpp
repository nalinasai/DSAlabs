#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the array size: ";
    int n;
    cin >> n;
    cin.ignore();
    cout<<"Enter the array: ";
    string inputstring;
    getline(cin, inputstring);
    istringstream ss(inputstring);

    vector<int> vecinteger;
    int num;
    while(ss>>num){
        vecinteger.push_back(num);
    }

    for(int i=1; i<n; i++){
        int key = vecinteger[i];
        int j = i-1;
        while(j>=0 && key<vecinteger[j]){
            vecinteger[j+1] = vecinteger[j];
            j--;
        }
        vecinteger[j+1] = key;

        for(int element: vecinteger){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    
}