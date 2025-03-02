#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    
    int array[6][6] = {{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};

    vector<int> numbers;
    int total;
    for(int i=0; i<4; i++){
        
        for(int j=0; j<4; j++){
            total = 0;
            total=array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] + array[i+2][j] +array[i+2][j+1] + array[i+2][j+2];
            numbers.push_back(total);
        }
    }
    int max = numbers[0];
    for(int k=1; k<numbers.size(); k++){
        if(max<numbers[k]){
            max = numbers[k];
        }
        else{
            continue;
        }
    }

    cout<<max;

    
   


}