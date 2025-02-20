//DSA Binary Search
#include <iostream>
using namespace std;

int main(){
int array[10] = {1,2,3,4,5,6,7,8,9,10};
int size = 10;
int search = 11 ;
int left = 0;
int right = size - 1;

while(left <= right){
int mid = (left + right) / 2 ;
	if(search == array[mid]){
    	cout<< search <<" Found at index "<< mid;
        return 0;
        }
    if(search > array[mid]){
    	left = mid + 1;
        }
    if(search < array[mid]){
    	right = mid - 1;
        }
    }
    cout<< search << " Not Found in Array ";
}
