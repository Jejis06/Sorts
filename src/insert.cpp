template<typename T>
void insertSort(T* begin, T* end){
	for(T* i=begin+1; i <= end; i++){
		T val = *i;
		T* j = i-1;
		while(j >= begin && *j > val){
			*(j + 1) = *j;
			j--;
		}
		*(j + 1) = val;

	}
}

