#include<iostream>
using namespace std;
void swap(int arr[], int i, int j){
                 int temp  = arr[i];
                 arr[i]= arr[j];
                 arr[j]=temp;
            }

int Partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}
void quickSort(int arr[], int n, int m){
    if(m<n){
        int pi = Partition(arr, m, n);
        quickSort(arr, m, pi-1);
        quickSort(arr, pi+1, n);
    }
}
int main(){
    int arr[5]={5, 4, 3, 2,1, 10};
    quickSort(arr, 0, 5);
    for(i=0; i<=4; i++){
        cout<<arr[i]<<"\t";

    }cout<<endl;
    return 0;
}