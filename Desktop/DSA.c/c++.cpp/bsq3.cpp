
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool jump_search(vector<int>& v1, int n, int key){
    int jump = sqrt(n);
    int left = 0;
    int right = jump;
    while(v1[min(right,n)-1] < key){
        left = right;
        right += jump;
        if(left >= n){
            return false;
        }
    }
    for(int i=left; i<min(right,n); i++){
        if(v1[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v1;
    int n, key;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Enter the key to search : ";
    cin>>key;
    if(jump_search(v1, n, key)){
        cout<<"Element found"<<endl;
    }
    else {
        cout<<"Element not found"<<endl;
    }
}