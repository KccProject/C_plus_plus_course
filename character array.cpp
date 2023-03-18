#include <bits/stdc++.h>
using namespace std;

void reverse(char name[],int size){
	int s=0,e=size-1;
	while(s<e){ 
		swap(name[s++],name[e--]);
	}
}

int main() {
	// your code goes here
	char name[10];
	cin>>name;
	
	// find length of character array.
	int i=0;
	while(name[i]!='\0') i++;
	cout<<"size = "<<i<<endl;
    
    reverse(name,i);
    cout<<"reverse : "<<name<<endl;
	return 0;
}
