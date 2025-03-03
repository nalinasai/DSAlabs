#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the integers with spaces: ";
    string inputintegers;
    getline(cin,inputintegers);
    istringstream ss(inputintegers);

    vector<int> vecintegers;
    int num;
    while(ss>>num){
        vecintegers.push_back(num);
    }

    int n = vecintegers.size();

    for(int i=1; i<n; i++){
        int key = vecintegers[i];
        int j = i-1;
        while(j>=0 && key<vecintegers[j]){
            vecintegers[j+1] = vecintegers[j];
            j--;
            for(int ele: vecintegers){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
        vecintegers[j+1] = key;
    }

    for(int element: vecintegers){
        cout<<element<<" ";
    }

}
