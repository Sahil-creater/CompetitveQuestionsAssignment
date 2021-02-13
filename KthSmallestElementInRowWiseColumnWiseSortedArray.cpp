#include<iostream>
using namespace std;
void search(int mat[4][4],int x)
{
	int i=0,j=C-1;
	while(i<R && j>=0)
	{
		if(mat[i][j]==x)
		{
			cout<<"found at"<<i<<" "<<j;
		}
		else if(mat[i][j] > x)
		{
			j--;
		}
		else
		i++;
	}
	cout<<"Not Found"<<endl;
}
int main()
{
	 int mat[4][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 },
    };
    cout << "7th smallest element is "
         << kthSmallest(mat, 4, 7);
    return 0;
}
