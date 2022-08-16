#include<bits/stdc++.h>

using namespace std;



bool searchEle(int a[], int x)
{
    // add code here.
    
    for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++){
        if(a[i]==x){
            return true;
        }
        
        return false;
    }
}
bool insertEle(int a[],int y,int yi)
{
    // add code here.
    
    int capacity = sizeof(a)/sizeof(a[0]);
    
    if(yi == capacity){
        return false;
    }
    
    for(int i= capacity-1; i<=yi; i--){
        
        a[i+1]=a[i];
        a[yi]=y;
    }
    
    return true;
    
}
bool deleteEle(int a[],int z)
{
    // add code here.
    
    int sizeOfArr = sizeof(a)/sizeof(a[0]);
    
    int i;
    
    for(i=0; i<sizeOfArr -1; i++){
        
        if(a[i]== z){
            break;
        }
        
        for(int j=i; j<sizeOfArr -2; j++){
            a[j] = a[j+1];
            return true;
        }
        return true;
    }
    
}