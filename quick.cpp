void quickSort(vector <int>& arr, int low, int high){
    if(low < high){
      int pivotI = partition(arr,low,high);
      quickSort(arr, low, pivotI-1);
      quickSort(arr,pivotI + 1, high);
    }
}

int partition(vector <int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
      if(arr[j] <= pivot){
        i++;
        swap(arr[i],arr[j]);
      }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}
