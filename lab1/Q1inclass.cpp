#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the integer greter than 0: ";
    int num;
    cin>>num;

    if(num==1){
        cout<<"one"<<endl;
    }
    else if(num==2){
        cout<<"two"<<endl;
    }
    else if(num==3){
        cout<<"three"<<endl;
    }
    else if(num==4){
        cout<<"four"<<endl;
    }
    else if(num==5){
        cout<<"five"<<endl;
    }
    else if(num==6){
        cout<<"six"<<endl;
    }
    else if(num==7){
        cout<<"seven"<<endl;
    }
    else if(num==8){
        cout<<"eight"<<endl;
    }
    else if(num==9){
        cout<<"nine"<<endl;
    }
    else if(num>9){
        cout<<"greater than 9"<<endl;
    }
    else{
        cout<<"enter the valid input"<<endl;
    }
}