//fibconi series using recurrsion

#include <bits/stdc++.h>
using namespace std ;

int f(int n){
  if(n<=1) return n;
  int lastdigit= f(n-1);
  int secondlastdigit= f(n-2);
  
 return lastdigit+secondlastdigit ;
  
}
int main(){
    cout<<f(4);
    
    return 0;
}

//time complexcity of the given code will be the (2^n).
//And time complexcity is expontential in nature .
