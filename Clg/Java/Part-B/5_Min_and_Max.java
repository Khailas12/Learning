// Prog to find Max and Min element in the array.

class Number {
    public static void main(String args[]) {
        int nums[] = {88, -3, 70, 59, 100};
        int min, max;
        min = max = nums[0];
        
        for (int i=0; i<nums.length; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
            if (nums[i] > max) {
                max = nums[i];
            }
            System.out.println("min= " + min + " max= " + max);
        }
    }
}