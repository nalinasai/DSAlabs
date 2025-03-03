#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the integers with spaces: ";
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
       for(int j=i+1; j<n; j++){
        if(vecintegers[i]>vecintegers[j]){
            swap(vecintegers[i],vecintegers[j]);
        }
       }
    }
    

    /*
    for(int i=0; i<n-1; i++){
        int min_id = i;
        for(int j=i+1; j<n; j++){
            if(vecintegers[min_id]>vecintegers[j]){
                min_id = j;
            }
        }
        swap(vecintegers[min_id],vecintegers[i]);
    }

    */
    for(int k=0; k<n; k++){
        cout<<vecintegers[k]<<" ";
    }
}