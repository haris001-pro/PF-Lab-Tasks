#include <iostream>
using namespace std;
int main() {
int r,c;
cout<<"Enter rows: ";
 cin>>r;
 cout<<"Enter cols: ";
 cin>>c;
    if(r!=c){
    cout<<"Matrix is not a square matrix"<<endl;
    return 0;
    }
int a[100][100];
int i,j;
   cout<<"Enter elements:"<<endl;
for(i=0;i<r;i++){
 for(j=0;j<c;j++){
 cin>>a[i][j];
 }
}
  bool check=true;
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          if(i==j && a[i][j]!=1)
          check=false;
          else if(i!=j && a[i][j]!=0) {
              check=false;
          }
      }
  }
if(check)
cout<<"It is identity matrix"<<endl;
else
cout<<"It is not identity matrix"<<endl;
 return 0;
}
