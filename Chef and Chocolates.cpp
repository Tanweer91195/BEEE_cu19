#include <iostream>
using namespace std;

int main() {
	int keo;
	cin>>keo;
	while(keo--){
	    int Five_Rupee,Ten_Rupee,Total_Rupee;
	    cin>>Five_Rupee>>Ten_Rupee>>Total_Rupee;
	    Five_Rupee=Five_Rupee*5;
	    Ten_Rupee=Ten_Rupee*10;
	    cout<<(Five_Rupee+Ten_Rupee)/Total_Rupee<<endl;
	    
	}
	return 0;
}
