vector<int> v;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        if(x!=1 && x!=0){ cout<<"enter either 0 or 1..";
        i--;
        continue;
        }
        v.push_back(x);
    }