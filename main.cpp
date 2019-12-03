#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int temp=a;

    if(b>a){
        temp=b;
    }
    int temp1=c;
    if(d>c){
        temp1=d;
    }if(temp>temp1){
        return temp;
    }else return temp1;

    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
