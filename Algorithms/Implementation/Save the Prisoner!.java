import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
   public static void main(String[] args){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(int i=0;i<n;i++){
           int a=sc.nextInt();
           int b=sc.nextInt();
           int c=sc.nextInt();
           if((b+c-1)%a!=0)
               System.out.println(((b+c-1)%a));
           else
               System.out.println(a);
       }
   }
   }
