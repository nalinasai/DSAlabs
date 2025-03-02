#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the intergers with spaces: ";
    string inputstr;
    cin.ignore();
    getline(cin,inputstr);
    istringstream ss(inputstr);

    vector<int> numbers;
    int num;
    while(ss>>num){
        numbers.push_back(num);
    }

    
    for(int i=1; i<n; i++){
        int key = numbers[i];
        int j = i-1;
        while(j>=0 && key<numbers[j]){
            numbers[j+1] = numbers[j];
            j--;
            for(int k=0; k<n; k++){
                cout<<numbers[k]<<" ";
                
            }
            cout<<endl;
            
        }
        
        numbers[j+1] = key;
    }
    for(int k=0; k<n; k++){
        cout<<numbers[k]<<" ";
    }


    
}