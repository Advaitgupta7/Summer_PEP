int bs(int arr[], int low, int high, int key)
{
    if(low>high){
        return -1;
    }
    int mid = low+(high- low)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(key<arr[mid]){
        bs(arr[],low,mid-1,key)
    }
    return bs(arr[],mid+1,high,key)
}