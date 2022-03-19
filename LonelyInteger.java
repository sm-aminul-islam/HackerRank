import java.util.Scanner;
public class Practice {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int []a=new int[n];
        int count=0;
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for (int i=0;i<n;i++ ){
            for(int x:a){
                count=count^x;
            }
        }
        System.out.println(count);

    }
}
