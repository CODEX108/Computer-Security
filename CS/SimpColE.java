

import java.util.*;

class SimpleColumnar{
    void calSimpleColumnar(String str, int col, int[] sequence){
        int k = 0, row, column;
        column  = col;
        row = 10;
        char s[][] = new char[row][column];

        System.out.print("---------------------------------------\n");
        System.out.print("Matrix of given String :\n\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if(k < str.length()){
                    s[i][j] = str.charAt(k);
                    System.out.print( s[i][j] + " ");
                }
                k++;

            }

            System.out.println("");
            if(i == str.length()){
                break;
            }
        }

        System.out.print("---------------------------------------\n");
        System.out.print("Cipher Text :\n\n");
        for(int j=0;j<column;j++)
        {
            for(int i=0;i<row;i++)
            {

                System.out.print(s[i][j]);

            }

        }


        System.out.print("\n---------------------------------------\n");
        System.out.print("Cipher Text using sequence :\n\n");
        for(int j=1;j<column;j++)
        {
            for(int i=1;i<row;i++)
            {
                int m = sequence[j];
                System.out.print(s[i][m]);
            }

        }


    }
}

class Main
{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sc.nextLine();
        str = str.toLowerCase();
        String str1 = str.replaceAll("\\s","");

        System.out.println("Enter column");
        int col = sc.nextInt();

        int[] sequence = new int[col];
        System.out.println("Enter sequence of column :");
        for(int i=1; i< col; i++)
        {
            sequence[i]=sc.nextInt();
        }



        SimpleColumnar simplecolumnar = new SimpleColumnar();
        simplecolumnar.calSimpleColumnar(str1,col,sequence);
    }
}
