// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true 

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    scanf("%d",&n);
    string num;    
    if(n<=9 && n>0){
        if (n==1){
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
        }
        
    else if(n>9){
        num = "Greater than 9";
    }    
    else{
        num = "unavailable";
    }
    
  cout<<num;  
    return 0;
}
