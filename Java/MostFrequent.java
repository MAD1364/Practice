import java.util.HashMap;

public class MostFrequent {
    public static void main(String[] args) {
        // NOTE: The following input values are used for testing your solution.

        // mostFrequent(array1) should return 1.
        int[] array1 = {1, 3, 1, 3, 2, 1};
        System.out.println(mostFrequent(array1));
        // mostFrequent(array2) should return 3.
        int[] array2 = {3, 3, 1, 3, 2, 1};
        System.out.println(mostFrequent(array2));
        // mostFrequent(array3) should return null.
        int[] array3 = {};
        System.out.println(mostFrequent(array3));
        // mostFrequent(array4) should return 0.
        int[] array4 = {0};
        System.out.println(mostFrequent(array4));
        // mostFrequent(array5) should return -1.
        int[] array5 = {0, -1, 10, 10, -1, 10, -1, -1, -1, 1};
        System.out.println(mostFrequent(array5));
    }

    // Implement your solution below.
    public static Integer mostFrequent(int[] givenArray) {

        if (givenArray == null)
            return null;

        HashMap<Integer, Integer> mostFrequent = new HashMap<Integer, Integer>();
        Integer maxItem = null;
        Integer count = 0;

        for (int i = 0; i < givenArray.length; i++)
        {
            if (mostFrequent.containsKey(givenArray[i]))
                mostFrequent.replace(givenArray[i],mostFrequent.get(givenArray[i]),
                mostFrequent.get(givenArray[i]) + 1);
            else
                mostFrequent.put(givenArray[i], 1);
        }

        for (HashMap.Entry<Integer, Integer> entry : mostFrequent.entrySet())
        {
            if (entry.getValue() > count)
            {
                count = entry.getValue();
                maxItem = entry.getKey();
            }
        }

        return maxItem;
    }
}