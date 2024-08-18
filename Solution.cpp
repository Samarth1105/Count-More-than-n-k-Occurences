class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        int ansFreq;
        if(k!=0){
            ansFreq=n/k;
        }
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        int noOfElements=0;
        pair<int,int>p;
        
        for(const auto &p: m){
            if(p.second>ansFreq){
                noOfElements++;
            }
        }
        
        return noOfElements;
    }
};
