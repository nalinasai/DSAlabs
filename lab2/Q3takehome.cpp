#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    cout<<"Enter the size and times: ";
    string inputsizetime;
    getline(cin, inputsizetime);
    istringstream ss1(inputsizetime);

    vector<int> vecinputsizetime;
    int num1;
    while(ss1>>num1){
        vecinputsizetime.push_back(num1);
    }

    int sizeofarray = vecinputsizetime[0];
    int nooftimes = vecinputsizetime[1];

    //vector<int> vecintergersfinal;
    int finalarray[sizeofarray];

    for(int p=0; p<sizeofarray; p++){
        finalarray[p] = 0;
    }

    int time=0;
    while(time<nooftimes){
        string vecinput;
        getline(cin,vecinput);
        istringstream ss(vecinput);

        vector<int> inputthree;   // 1 2 100

        int num;
        while(ss>>num){
            inputthree.push_back(num);
        }

        for(int k=inputthree[0]; k<=inputthree[1]; k++){
            int key = finalarray[k-1];
            key = key+inputthree[2];
            finalarray[k-1] = key;
        }
        time++;

        
    }

    

    int max = finalarray[0];

    for(int w=1; w<sizeofarray; w++){
        if(max<finalarray[w]){
            max = finalarray[w];
        }
    }

    cout<<max;




}