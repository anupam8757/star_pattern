/* print the pattern 
         *
       * *
     * * *
   * * * *
 * * * * *
 number of row is entered by user */
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!\n";
    int n;
    cout<<"Enter Number of Rows\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
         {
             if(j>=n+1-i)
             cout<<" *";
             else
             cout<<"  ";
         }
         cout<<endl;
    }
}
    