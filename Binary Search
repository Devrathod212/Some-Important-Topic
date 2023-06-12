int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int find ;
    cin >> find;
    sort(arr,arr+n);

    
    int high = n-1;
    int low = 0;

    while( high-low > 1){

        int mid = (high+low)/2;
        cout<<mid <<endl;
       
        if(arr[mid] < find){

            low = mid+1;
        }

        else{

            high = mid;
        }
    }

    cout << arr[high] << "  "<< arr[low] << endl;
    if(arr[high] == find || arr[low]==find){

        cout<<"found\n";
    }

    else{
        cout<<"Not found\n";
    }
    
    return 0;
}
