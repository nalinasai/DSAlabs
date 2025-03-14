//heap sort

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//function to heapify the tree
void heapify(int arr[],int n, int root){
    //build heapify
    int largest=root;
    int left=2*root+1;
    int right=2*root+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=root){
        swap(arr[root],arr[largest]);
        heapify(arr,n,largest);
    }
}

//implement heap sort
void heapsort(int arr[], int n){
    //build heap
    for(int i=n/2-1; i>=0; i--){
        heapify(arr,n,i);
    }

    //extracting elements from heap one by one
    for (int i=n-1; i>0;i--){
        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}

//display the output
void displayarray(int arr[],int n){
    cout<<"Here is the output: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }   
}

//main program
int main(){
    string input;
    cout<<"Enter the array: ";
    getline(cin,input);
    istringstream ss(input);

    vector<int> vecinput;
    int num;
    while(ss>>num){
        vecinput.push_back(num);
    }

    int n=vecinput.size();
    

    heapsort(vecinput.data(),n);

    displayarray(vecinput.data(),n);
}