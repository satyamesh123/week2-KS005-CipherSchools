#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int c;
    
    c=*x;
    *x=*y;
    *y=c;
    
    cout<<"the swapping is complete"<<endl;
    
}

int main()
{
    int a,b;
    
    a=3;
    b=4;
    
    swap(&a,&b);
    
    cout<<"the values of a and b after swapping are : "<<a<<" "<<b;
    
    return 0;
}
// by function
#include <iostream>

using namespace std;
    
int main()
{
    int a[10];
    
    cout<<"value for comparison : "<<endl;
    
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of address of a[0]"<<&a[0]<<endl;
    cout<<"the value of address of a[1]"<<&a[1]<<endl;
    
    return 0;
}
