template<typename T>
void swap(T* a, T* b){
	T temp = *a;
	*a = *b;
	*b = temp;
}

template<typename T>
void bubbleSort(T* begin, T* end){
	for(T* high = end+1; high > begin; high--){
		bool swapped = false;
		for(T* low = begin; low < high-1; low++)
			if(*low > *(low + 1)){
				swap(low+1, low);
				swapped = true;
		}
		if(!swapped) break;

	}
}
