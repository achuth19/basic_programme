#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cin>>s;
    int n;
    cin>>n;
    string p[n];
    string a[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        a[i]=p[i];
        if(a[i]==s){
            count=count+1;
        }
        for(int j=0;j<n;j++){
            if(i!=j){
                a[i]=a[i]+p[j];
                if(a[i]==s){
                    count=count+1;
                }
            }
        }
    }
    

}