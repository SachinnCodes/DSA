class Solution {
public:
    string triangleType(vector<int>& nums) {
    string e = "equilateral";
   string s = "scalene";
   string is = "isosceles";
   string n="none";

   int i=nums[0];
   int j=nums[1];
   int k=nums[2];

    if( i==j && j==k)
            return e;
    else if (i==j && i+j > k || j==k && j+k > i || i == k && i+k > j)
            return is;
    else if ( i+j > k && j+k > i && i+k > j)
            return s;
    else 
            return n;
    }
};
