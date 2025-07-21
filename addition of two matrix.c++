#include<iostream>
using namespace std;
class matrix
{private:
    int a[5][5],b[5][5],c[5][5],n,m;
   
      public:
    void read();  
    void add();
    void display();
}k;
    
void matrix::read()
{
    cout << "Enter number of columns and rows: ";
    cin>>n>>m;
    cout<<"read a:"<<endl;
    for(int i=0;i<m;i++)
    {for(int j=0;j<n;j++){
        cin>>a[i][j];}
    }
    

   cout<<"read b:"<<endl;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cin>>b[i][j];
       }
   }
}
 


void matrix::add()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
 void matrix::display()
 { cout<<"matrix c is:"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cout<<c[i][j];
            
 }}}
 
 int main(){
     k.read();
     k.add();
     k.display();
     return 0;
 }


#output:
Enter number of columns and rows: 2

2
read a:
1
4
2
3
read b:
5
6
4
1
matrix c is:
61064

=== Code Execution Successful ===
