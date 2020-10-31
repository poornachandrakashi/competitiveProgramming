#include<bits/stdc++.h>

using namespace std;

int main(){
  int arr[9] = {9,6,5,0,8,2,7,1,3};
  int key = 0;
  int i,j;
  for(j=1;j<9;j++){
    i=j-1;
    key = arr[j];
    while(i>-1 && arr[i]>key){
      arr[i+1] = arr[i];
      i--;
    }
    arr[i+1] = key;
  }

  for(i=0;i<9;i++){
    printf("%d",arr[i]);
  }
}
