void sum(int n){
    if(i==0){
        return ;
    }
    cout << n+sum(n-1);

}