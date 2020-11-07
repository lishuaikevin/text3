#include<iostream>
using namespace std;
int main()
{
	int n, m,i,j,scor[50][5];
	double etu[50] , eso[5] ;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for(j=0;j<m;j++)
			cin >> scor[i][j];
			
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			etu[i] = 0;
			etu[i] += scor[i][j];
			cout << etu[i] / n << " ";
	}
	
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
			eso[j] = 0;
			eso[j] += scor[i][j];
		cout << eso[j] / m << " ";
	}
	return 0;
}
	