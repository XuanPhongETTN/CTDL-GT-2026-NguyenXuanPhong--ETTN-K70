#include <stdio.h>
#include <stdlib.h>

#define MAX 1000 

struct TrangThai {
    int n;
    char nguon, dich, tg;
};

struct TrangThai st[MAX]; 
int top = -1;

void push(int n, char a, char b, char c) {
    top++;
    st[top].n = n;
    st[top].nguon = a;
    st[top].dich = b;
    st[top].tg = c;
}

struct TrangThai pop() {
    struct TrangThai tmp = st[top];
    top--;
    return tmp;
}

void khu_de_quy(int n, char a, char b, char c) {
    push(n, a, b, c);

    while(top != -1) {
        struct TrangThai hien_tai = pop();
        
        if(hien_tai.n == 1) {
            printf("Chuyen dia tu cot %c sang cot %c\n", hien_tai.nguon, hien_tai.dich);
        } 
        else {
            push(hien_tai.n - 1, hien_tai.tg, hien_tai.dich, hien_tai.nguon);
            push(1, hien_tai.nguon, hien_tai.dich, hien_tai.tg);
            push(hien_tai.n - 1, hien_tai.nguon, hien_tai.tg, hien_tai.dich);
        }
    }
}

int main() {
    int so_dia;
    printf("Nhap so dia N = ");
    scanf("%d", &so_dia);
    
    printf("\nCac buoc di chuyen:\n");
    khu_de_quy(so_dia, 'A', 'B', 'C');
    
    return 0;
}