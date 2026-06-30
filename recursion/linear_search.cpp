bool ls(int arr[],int size,int key){
    if (size==0){
        return false;
    }
    if(arr[size-1]==key){
        return true;
    }
    return ls(arr[],size-1,key);

}