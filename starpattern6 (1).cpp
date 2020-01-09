/* print the pattern
           *          
         * * *        
       * * * * *      
     * * * * * * *    
   * * * * * * * * *  
 * * * * * * * * * * *   
 number of row is entered by user
 */
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!\n";
    int n,k=1;
    cout<<"Enter Number of Rows\n";
   cin>>n;
    for(int i=1;i<=n;i++)
    {
        k=1;
        for(int j=1;j<=2*n-1;j++)
         {
             if(j>=n+1-i && j<=n-1+i && k)
             {
             cout<<" *";
             k=0;
             }
             else
             {
             cout<<"  ";
             k=1;
             }
         }
         cout<<endl;
    }
}
    