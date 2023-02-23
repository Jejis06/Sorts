//#include "quick.cpp"
//#include "bubble.cpp"
//#include "insert.cpp"
#include "merge.cpp"
#include <iostream>

#define Sort mergeSort 

int main(){
	/* load array and print it*/
	size_t size = 12;
	double arr[size] = {-9,-8,-45,88,-95,1,1,1,1,-7,3,1};
	for(int i=0; i<size; i++)
		std::cout << arr[i] << ' ';

	/* sort array */
	Sort(arr,arr+size-1);
	std::cout << '\n';


	/* print sorted array */
	for(int i=0; i<size; i++)
		std::cout << arr[i] << ' ';

	

}
