#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string sizeandtimes;
    string inputnumbers;
    cout<<"Enter the size and tiems: ";
    getline(cin,sizeandtimes);
    cout<<"Enter the integers with spaces: ";
    getline(cin,inputnumbers);

    istringstream ss1(sizeandtimes);
    istringstream ss2(inputnumbers);

    vector<int> vecsizeandtime;
    vector<int> vecinputnumbers;

    int num1;
    while(ss1>>num1){
        vecsizeandtime.push_back(num1);
    }

    int num2;
    while(ss2>>num2){
        vecinputnumbers.push_back(num2);
    }

    int sizeofarray = vecsizeandtime[0];
    int nooftime = vecsizeandtime[1];

    for(int i=0; i<nooftime; i++){
        int key = vecinputnumbers[0];
        for(int m=1; m<sizeofarray; m++){
            vecinputnumbers[m-1] = vecinputnumbers[m];
        }
        vecinputnumbers[sizeofarray-1] = key;
    }

    for(int n: vecinputnumbers){
        cout<<n<<" ";
    }
}