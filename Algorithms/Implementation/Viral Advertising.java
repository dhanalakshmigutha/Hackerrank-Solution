import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Viral{
    public static void main(String arg[] )
    {
        int n,i,cum=2,sum=2;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=2;i<=n;i++)
        {
            cum=(cum*3)/2;
            sum+=cum;
        }
        System.out.print(sum);
    }
}
