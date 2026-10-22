#include<stdio.h>
void timso(int target,int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                printf("2 so can tim:(%d,%d)",arr[i],arr[j]);
                return;
            }

        }
    }
    printf("not found");
}
int main(){
    int target=10 ;
    int arr[]={8,7,2,5,3,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    timso(target,arr,n);
    return 0;
}