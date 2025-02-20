#include <iostream>
using namespace std;

void linearSearch(int arr[],int num){
int count = 0;
int size = 6;

for(int i = 0 ; i < size ; i++){
if(num == arr[i]){
cout<<num <<" at index " << i;
count = 1;
break;
}}
if(count == 0 ){
cout<<" Number not Found " ;
}
};

int main() {

int arr[6] = { 10 ,20 ,210 ,30 , 410 ,40};
int num = 40;

linearSearch( arr,  num);
return 0;
}
