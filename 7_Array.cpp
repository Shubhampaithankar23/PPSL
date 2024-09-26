#include<iostream>
using namespace std;
int main(){
int n;

//input the number of element in the array
cout<<"enter the number of element:";
cin>>n;
int arr[n];
//input the element of the array
cout<<"enter the element of array:\n";
for (int i=0; i<n; i++)
{
cin>>arr[i];
}


//sorting in ascending order
for (int i=0; i<n; i++){
for (int j=i+1; j<n; j++){
if ( arr[i]>arr[j]){

//swap the element
int temp =arr[i];
arr[i]=arr[j];
arr[j]= temp;
}
}
}
//display the array started in ascending order
cout<<"\n array in ascending order:";
for (int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;

//sorting descending order
for (int i=0; i<n-1; i++){
for (int j=i+1; j<n; j++) {
if (arr[i]<arr[j]) {
//swap the element
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
//display
cout<<" array in descending order:";
for (int i=0; i<n; i++)
{
cout<<arr[i]<< " ";
}
cout<<endl;

return 0;
}
