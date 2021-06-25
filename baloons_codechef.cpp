#include <iostream>
using namespace std;

int main() {
	int testCount;
	
	cin>>testCount;
	while(testCount--){
	    
	    int count = 0, result;
	    
	    int size;
        cin>>size;
	    int arr[size];
	    for(int i = 0; i<size; i++){
	        cin>>arr[i];
	    }
	    
	    int j = 0;
	    
	    for(;j<size; j++){
	        
	        if(count=7){
	            break;
	            result = j;
	        }
	            
	        
	        if((arr[j]>0)&&(arr[j]<8)){
	            
	            count++;
	        }
	    }
	    cout<<result<<endl;
	    
	return 0;
}
}
