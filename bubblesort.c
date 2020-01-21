

	#include <stdio.h>
				 
	int main () {

	/*Create and Initialize the array and variables*/
		int Array[]= {3,22,17,8,30,2,14,1};
		int tempstorage;
		int i;
		int j;
				
	/*You can find the array length using this equation
	or you can state the length = 8; since length is known*/
		int Arraylen = sizeof(Array) / sizeof(Array[0]); 
		
	/*Iterate through the Array*/		
		for(i=1; i < Arraylen; i++){
	/*Starting from the end of the Array,
	 *iterate through and swap if out of order*/
			for(j = Arraylen-1;j>=i;j--){
				if( Array[j] < Array[j-1]) {
				tempstorage=Array[j];
				Array[j]=Array[j-1];
				Array[j-1]=tempstorage;
				}
			}
		}
		
	/*Print the Array*/
		printf("SortedArray\n");
		printf("Array: ");
		for(i=0; i < Arraylen ; i++) {	
		printf(" %i ",Array[i]);
		}
		printf("\n");
		return 0;
	}





