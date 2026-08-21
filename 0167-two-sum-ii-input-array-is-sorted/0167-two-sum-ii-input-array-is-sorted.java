class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int low = 0;
        int high = numbers.length - 1;
        while(low < high){
        int checksum = (numbers[low]+numbers[high]);
        if(checksum == target){
            return new int[]{low +1, high+1};
        }
        else if(checksum < target){
            low++;
        }
        else{
            high--;
        }
        }
        return new int[]{-1, -1};
    }
}