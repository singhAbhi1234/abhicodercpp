#include <iostream>
using namespace std;

main(){
int arr[]={1,2,3,4,5};
int *ptr;
ptr=arr;
int i;
int n=sizeof arr/sizeof(arr[0]);
for(i=0;i<n;i++){
	cout<<*ptr<<endl;
	ptr=ptr+1;
	
}
}
