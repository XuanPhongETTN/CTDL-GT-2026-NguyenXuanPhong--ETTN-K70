#include<stdio.h>
void timphantu(int arr[], int n){
    int mangphu[n];
    for(int i=0;i<n;i++){
        mangphu[i]=0;
    }
    for(int i=0;i<n;i++){
        if(mangphu[arr[i]]==1){
            printf("phan tu lap la: %d", arr[i]);
            return ;
        }
        mangphu[arr[i]]=1;
    }
    printf("khong co phan tu lap lai");
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    timphantu(arr,n);
    return 0;
}