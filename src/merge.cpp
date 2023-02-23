#include <cstddef>

template<typename T>
void swap(T* a, T* b){
	T temp = *a;
	*a = *b;
	*b = temp;
}

template<typename T>
void merge(T* left, T* mid, T* right){
	size_t l1 = mid - left + 1;
	size_t l2 = right - mid;

	T* leftArr = new T[l1];
	T* rightArr = new T[l2];

	/* split */

	for(size_t i=0; i<l1; i++)
		leftArr[i] = *(left + i);
	for(size_t i=0; i<l2; i++)
		rightArr[i] = *(mid + i + 1);

	/* merge */
	T* i = leftArr;
	T* j = rightArr;
	T* arr = left;

	while(i < leftArr + l1 && j < rightArr + l2){
		if(*i <= *j){
			*arr = *i;
			i++;
			goto next;
		}
		*arr = *j;
		j++;

		next:;
		arr++;
	}
	while(i < leftArr + l1){
		*arr = *i;
		i++;
		arr++;
	}
	while(j < rightArr + l2){
		*arr = *j;
		j++;
		arr++;
	}

	delete[] leftArr;
	delete[] rightArr;
}


template<typename T>
void mergeSort(T* left, T* right){
	if(left >= right) return;

	T* mid = left + (right - left)/2;

	mergeSort(left, mid);
	mergeSort(mid+1, right);

	merge(left, mid, right);
}
