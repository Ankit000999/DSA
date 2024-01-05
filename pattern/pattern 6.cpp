#include <iostream>
using namespace std;
int main(){
        int n=5;
        for (int i=0;i<n;i++)//rows ke liye 0,1,2,3,4
        {
            // space ke liye
         for(int j=1;j<=n-i;j++)// 1,2,3,4,5
         {
          cout<<" ";
    }
    for (int j =0;j<(2*i)+1;j++)
    {
    cout<<"*";
        
    } 
    // space ke liye
    for(int j=1;j<=n-i;j++)
         {
          cout<<" ";
    }
    cout<<endl;
 }
	return 0;
}