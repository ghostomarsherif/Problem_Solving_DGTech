//Probem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int start,end;
    string num;
    scanf("%d %d",&start,&end);
    for(int n=start;n<=end;n++){
    if (n<=9 && n>0){
        if(n == 1){
               num = "one"; 
        }else if (n==2) {
            num = "two";
        }else if (n==3) {
            num = "three";
        }else if (n==4) {
            num = "four";
        }else if (n==5) {
            num = "five";
        }else if (n==6) {
            num = "six";
        }else if (n==7) {
            num = "seven";
        }else if (n==8) {
            num = "eight";
        }else if (n==9) {
            num = "nine";
        }
        }else if (n>9){
            if(n%2 == 1){
                num = "odd";
        }else{
                num = "even";
            }
        }
     printf("%s\n",num.c_str());   
    }
    return 0;
}
