void reverse(vector<int>& arr, int left, int right)
{
    if(left >= right)
        return;

    swap(arr[left], arr[right]);

    reverse(arr, left + 1, right - 1);
}