# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int N,X=14,temp;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
    	cin >> a[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<N;i++)  cout << a[i] << endl;
	for(int i=0;i<N;i++){
		if(a[i]==X) cout << "So can tim la :" << a[i];
	    else cout << "Wrong !";
	}
	}
	
	
	
	

