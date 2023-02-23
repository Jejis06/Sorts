template<typename T>
void swap(T* a, T* b){
	T temp = *a;
	*a = *b;
	*b = temp;
}

template<typename T>
T* partition(T* low, T* high){
	T* pivot = low + (high - low)/2; // pivot set in the middle  
	T* jumper = low - 1;

	for(T* bound = low; bound <= high-1; bound++){
		if(*bound < *pivot){
			jumper++;
			swap(jumper, bound);
		}
	}
	swap(jumper+1, pivot);
	return (jumper + 1);

}

template<typename T>
void quickSort(T* low, T* high){
	if(low > high) return;
	T* partitionFlag = partition(low, high);

	quickSort(low, partitionFlag-1); // low
	quickSort(partitionFlag+1, high); // high

}

