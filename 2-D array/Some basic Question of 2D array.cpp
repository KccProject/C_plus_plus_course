// Some basic Question on 2-D Array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
    // Row wise sum of an array
    cout<<"Row wise Sum of an array"<<endl;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++) sum+=arr[i][j];
        cout<<sum<<endl;
    }
    // Column wise Sum of an array
    cout<<"Column wise Sum of an array"<<endl;
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++) sum+=arr[i][j];
        cout<<sum<<" ";
    }cout<<endl;
    // highest row sum of an array
    cout<<"Highest Row wise Sum of an array"<<endl;
    int hrs;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++) sum+=arr[i][j];
        if(hrs<sum) hrs=sum;
    }
    cout<<hrs<<endl;
    // highest column sum of an array
    cout<<"Highest Column wise Sum of an array"<<endl;
    int hcs = INT_MIN;
    for(int j=0;j<m;j++){
        int sum=0; 
        for(int i=0;i<n;i++) sum+=arr[i][j];
        if(hcs<sum) hcs=sum;
    }
    cout<<hcs<<endl;
    return 0;
}
