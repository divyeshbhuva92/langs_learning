// Write java program to do sorting of 5 numbers given by user.


public class sort_nums {
    public static void main(String[] args){
        int nums_array[] = {2,5,8,1,3};
        int i, j, temp;

        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5-i-1; j++) {
                if (nums_array[j] > nums_array[j + 1]) {
                    temp = nums_array[j];
                    nums_array[j] = nums_array[j + 1];
                    nums_array[j + 1] = temp;
                }
            }
        }

        for(i = 0; i < 5; i++) {
            System.out.println("sorted array: " + nums_array[i]);
        }
    }
}
