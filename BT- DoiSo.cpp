# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n ;
    cout << endl;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] + a[j]==0){
				cout << a[i] << " "<< a[j] <<endl;
			}
			
		}
	
		}
	}
	
	
	
	

