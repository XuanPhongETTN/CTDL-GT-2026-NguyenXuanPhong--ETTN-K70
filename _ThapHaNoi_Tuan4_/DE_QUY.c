#include<stdio.h>
void thaphanoi(int n,char nguon,char dich,char tg){
    if(n==1){
        printf("chuyen dia 1 tu %c sang %c\n",nguon,dich);
        return;
}
thaphanoi(n-1,nguon,tg,dich);
printf("chuyen dia %d tu %c sang %c\n ",n,nguon,dich);
thaphanoi(n-1,tg,dich,nguon);
}
int main(){
    int a;
    printf("nhap so dia:");
    scanf("%d",&a);
    printf("thu tu cac buoc:\n");
    thaphanoi(a,'A','B','C');
    return 0;
}