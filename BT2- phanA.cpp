# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int N,X=14;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
    	cin >> a[i];
	}
	for(int i=0;i<N;i++){
		if(a[i]==X) cout << "So can tim la :" << a[i];
		else  cout <<a[i]<<" "<< "khong phai la so ban can tim !";
	}
	}
	
	
	
	

