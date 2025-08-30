class Solution {
public:
    int countOperations(int num1, int num2) {
            int steps=0;
        while(true){
            if ( num1 == 0 || num2 == 0) return 0;
           else if( num1 == num2){
                num1=num1-num2;
                steps++;
                break;
            } else if ( num1 > num2 ){
                num1=num1-num2;
                steps++;
            } else {
                num2=num2-num1;
                steps++;
            }
        } return steps;
        
    }
};