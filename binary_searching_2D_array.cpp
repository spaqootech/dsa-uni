#include <iostream>
using namespace std;

int main() {
int a[2][5] = {{1,2,3,4,5},{11,12,13,14,15}};
int s = 5;
int n = 5;

for(int i =0;i<s; i++){
int l = 0;
int r = s -1;
while(l <= r){
int m = (l+r)/2;
if(n == a[i][m]){
cout<<n<<" Num Found index ["<<i<<"]["<< m<<"]"; return 0;}
if(n > a[i][m]){l = m + 1; }
if(n < a[i][m]){r = m - 1; }
}
}
cout<<"Num Not Found";
}
