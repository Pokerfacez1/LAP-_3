#include <iostream>
using namespace std;
void first()
{
 int size;
    cin>>size;
	int *array=new int[size];
	cout<<"Enter the size element: "<<endl;
	
	for(int i=0 ; i<size ; i++)
	{
		arr[i]=i+1;
		cout<<array[i]<<" ";
	}
	for(int i=0 ; i<size ; i++)
	{
		cout<<array[i]<<" ";
		
	}
	delete [] array;	
}
void second()
{
	int rows,colums;
	cin>>rows>>colums;
	int* *array = new int* [rows];
	for(int i=0 ; i<rows ; i++)
	{
		array[i]=new int [colums];
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0 ; j<colums;j++)
		{
			arr[i][j]=10;
			cout<<array[i][j]<<" " ;
		}
	}
	for( int i=0; i<rows;i++)
	{
		delete []array[i];
	}
	delete []array;
}
int main()
{
   first();
   second();
	return 0;
}
