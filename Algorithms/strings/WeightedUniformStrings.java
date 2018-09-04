import java.util.Scanner;
import java.util.HashSet;
public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String strin   = scan.next();
        int num  = scan.nextInt();
        HashSet<Integer> weights = getWeights(strin);
        while (num-- > 0) {
            int x = scan.nextInt();
            System.out.println(weights.contains(x) ? "Yes" : "No");
        }
        scan.close();
    }
    
    private static HashSet<Integer> getWeights(String strin) {
        HashSet<Integer> weights = new HashSet<>();
        int weight = 0;
        char prev = ' ';
        for (int i = 0; i < strin.length(); i++) {
            if (strin.charAt(i) != prev) 
                weight = 0;
            weight +=  strin.charAt(i) - 'a' + 1;
            weights.add(weight);
            prev = strin.charAt(i);
        }
        return weights;
    }
}
