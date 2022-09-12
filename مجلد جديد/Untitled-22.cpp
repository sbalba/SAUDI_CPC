#include <bits/stdc++.h>
 using namespace std;

int a[300001];
 bool search(vector<int> a, x)
 {

    int l =0,h=a.size()-1;
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid]==x)
        return mid;
        else if(a[mid]<x){
            l = mid+1;
        }
        else{
            h = mid-1;
        }


    }
 }
int main(){


}