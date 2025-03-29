#include <iostream>
using namespace std;

int main() 
{
int i=0;
int j=0;
int arr[]={4,8,5,9,8,9,3,7};
for(i=0;i<8;i++)
  {
      for(j=0;j<8;j++)
      {
          if(arr[j]!=arr[i])
          {
              cout<<arr[i];
          }
          else
          {
              cout<<"dublicate is present"<<endl;
              continue;
              
          }
      }
  }
return 0;

}