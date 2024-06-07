#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count ++;
        }
    }
    //placing pivot at right position
    int pivotIndex = s+ count;
    swap(arr[pivotIndex],arr[s]);

    //left aur right wala part smbhal lete h
    int i=s,j=e;
    while((i<pivotIndex) && (j>pivotIndex)){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if((i<pivotIndex) && (j>pivotIndex)){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[] , int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition karenge
    int p = partition(arr, s, e);

    //left part sort
    quickSort(arr, s, p-1);\

    //right part sort
    quickSort(arr, p+1, e);


}

int main(){
    int arr[9] = {6, 6, -6, -2, -4, -6, 2, -6, 0 };
    int n = 9;

    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout << endl;

}

//BEST CASE //AVERAGE CASE
//SC = O(n)
//TC = O(nlogn)


//WORST CASE
//TC = O(n^2)