int BinarySearch(Array *a, int key, int lower, size_t upper){
	int mid=(lower+upper)>>1;
	if(lower > (int)upper) return mid+1;
	else {
		int temp = a->array[mid];
		if(temp == key) return mid;
		else if(temp > key) return BinarySearch(a, key, lower, mid-1);
		else return BinarySearch(a, key, mid+1, upper);
	}
}