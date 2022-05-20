#include<iostream>
using namespace std;
int main()
{
    int a[3][4] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};
    int i, j;
    cout<<"matrix will be:\n";
    for(i=0;  i<3; i++)
    {
        for(j=0; j<4; j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
}
