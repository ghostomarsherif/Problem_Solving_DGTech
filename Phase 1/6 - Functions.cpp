// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compare_four(int a,int b,int c, int d) {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max;
    if (a>b && a>c && a>d){
        max = a;
    }else if (b>c && b>a && b>d){
        max = b;
    }else if (c>a && c>b && c>d){
        max = c;
    }else if (d>a && d>b && d>c){
        max = d;
    }else{
        max = 0;
    }
    printf("%d",max);
    return max;
    }

    
    
int main() {
    compare_four(4,5,6,7);
  
    return 0;
}
