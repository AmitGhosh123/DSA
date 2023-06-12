#include <iostream>
using namespace std;
 bool linearSearch(int arr[],int key, int size){
    for(int i = 0;i<size;i++){
        if(key == arr[i]){
            return true;
        }
        else {
            return false;
        }
    }
 }

int main()
{
     
    int arr[5]={23,45,56,67,78};
    int key;
    cin>>key;
    bool found = linearSearch( arr,key,10);
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"NF";
    }
}