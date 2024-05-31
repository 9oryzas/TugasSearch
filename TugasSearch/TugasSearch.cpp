// TugasSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int* data,int n, int cari){
    int l=0;
    int r=n-1;
    
    while(l<=r){
        int mid=l+(r-l)/2;
        
        if(data[mid]==cari){
            return mid;
        }
        else if (data[mid]<cari){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return-1;
}

int main() {
    
    int n;
    cout <<"Masukkan Jumlah data :";
    cin >>n;
    
    int* datax=new int[n];
    for (int i=0;i<n;i++){
        cout <<"Data ke -"<<i+1<<" :";
        cin>> datax[i];
        
    }
    cout <<"\nData Kamu : ";
    for (int i=0;i<n;i++){
        cout <<datax[i]<<" ";
    }
    cout <<endl;
    
    //mengurutkan array
    sort(datax, datax + n);
    
    int* urut= new int[n];
    for(int i=0;i<n;i++){
        urut[i]=datax[i];
        
    }
        cout <<"Hasil Sort :";
    for (int i=0;i<n;i++){
        cout<<urut[i];
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
