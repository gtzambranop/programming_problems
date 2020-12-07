import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Solution {
    public static void main(String[] args) throws Exception {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(ir);
        int num = Integer.parseInt(br.readLine());
        while(num > 0) {
            String[] coordiante = br.readLine().split(" ");
            int x = Integer.parseInt(coordiante[0]);
            int y = Integer.parseInt(coordiante[1]);
            System.out.println(2*Math.max(x, y) - (x != y? 1:0));
            num --;
        }
        br.close();
        ir.close();
    }
}