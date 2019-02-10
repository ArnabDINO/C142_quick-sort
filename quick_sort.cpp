//*********************QUICK_SORT*******************
#include<iostream>

using namespace std;

void swap(int *a,int *b){
	int t= *a;
	*a=*b;
	*b=t;
}

int part(int arr[],int L,int H){
	//last element is chosen as the pivot
	//L and H are the first and last element (pointer) of the array
	int pi=arr[H];
	cout<<"pivot"<<pi<<endl;
	cout<<"L"<<L<<endl;
	cout<<"H"<<H<<endl;
	int i=L-1;
	for(int j=L;j<=H-1;j++){
		if(arr[j]<pi){
			i++;
			swap(&arr[j],&arr[i]);
		}
	
	}
	int u=i+1;
	swap(&arr[u],&arr[H]);
	
	return u;
	}

void qs(int arr[],int L,int H){
	//choosing the pivot

	
	if(L>=H){
		return;
	}
	else{
			int pi;
	pi=part(arr,L,H);
		qs(arr,L,pi-1);
		qs(arr,pi+1,H);
	}
	//partition gives the pivot
	
}

int main(){
	int arr[50];
	int z;
	cout<<"enter the number of values you want to enter"<<endl;
	cin>>z;
	for(int k=0;k<z;k++)
	{
		cout<<"Enter value number "<<k+1<<endl;
		cin>>arr[k];
	}
	qs(arr,0,z-1);
	for(int e=0;e<z;e++){
		cout<<arr[e]<<" ";
	}
return 0;
}
