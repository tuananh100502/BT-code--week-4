# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int n,max;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				max=a[i];
				a[i]=a[j];
				a[j]=max;
			}
			 
		}
	
		}	for(int i=0;i<n;i++) cout << a[i] << " "; // sapp xep theo day tang dan
		    
	}



# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int n,max;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]a[j]){
				min=a[i];
				a[i]=a[j];
				a[j]=min;
			}
			 
		}
	
		}	for(int i=0;i<n;i++) cout << a[i] << " "; // sapp xep theo day giam dan
		    
	}
