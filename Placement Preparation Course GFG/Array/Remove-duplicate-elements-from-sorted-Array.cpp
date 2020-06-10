/*You are required to complete this function */
int remove_duplicate(int arr[],int N)
{
    set<int> mp;
    for(int i=0;i<N;i++)
    {
        mp.insert(arr[i]);
    }
    int i=0;
    for(auto it=mp.begin(); it!=mp.end();++it)
    {
        arr[i]=(*it);
        i++;
    }
    return (i);
}
