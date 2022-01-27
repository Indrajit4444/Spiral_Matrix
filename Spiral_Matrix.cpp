#include <iostream>
using namespace std;
int main()
{
    int count=1,row,col,m=0,i=0,j=0;
    cout<< "Enter Row and column"<<endl;
    cin>>row>>col;
    int a[row][col];
    const int k= row * col, rowc= row, colc= col;
    while (count<=k)
    {
        j=m;
        i=m;
        for  (;j<col;j++) //Right shift
        {
            a[i][j]=count;
            count++;
        }
        j--;
        i++;
        if (count>k)
            break;
        for  (;i<row;i++) //Down shift
        {
            a[i][j]=count;
            count++;
        }
        i--;
        j--;
        if (count>k)
            break;
        for  (;j>=m;j--) //Left shift
        {
            a[i][j]=count;
            count++;
        }
        j++;
        i--;
        m++;
        if (count>k)
            break;
        for (;i>=m;i--) //Up shift
        {
            a[i][j]=count;
            count++;   
        }
        col--;
        row--;
    }
    for (i=0;i<rowc;i++)
    {
        for  (j=0;j<colc;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}