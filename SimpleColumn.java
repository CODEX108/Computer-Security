package Cryptology;

import java.io.*;

public class SimpleColumn
{
    static String s1,st,d;
    static StringBuffer s;
    static int m,n,c,choice,p,q,k;
    static int z[]=new int[10];
    static char a[][];

    public static void dis()
    {
        System.out.println();
        System.out.println("Matrix :");
        System.out.println();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!='$')
                System.out.print(a[i][j]+" ");
else
                System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println();
    }

    public static void enc(DataInputStream dis)throws Exception
    {
        while(true)
        {
            c=0;
            s1="";
            System.out.println("————————————————————————");
            System.out.print("Enter columns Sequence between 1 to "+n+" : ");
            st=dis.readLine();
            d=st+d;
            System.out.println();

            for(int i=0;i<n;i++)
            {
                c=(int)st.charAt(i)-49;
                for(int j=0;j<m;j++)
                {
                    if(a[j][c]!='$')
                    s1=s1+a[j][c];
                }
            }
            s1.trim();
            c=0;
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    if(c<s1.length())
                        a[i][j]=s1.charAt(c++);
                    else
                        a[i][j]='$';
            dis();

            System.out.println();
            System.out.println();
            System.out.print("Do You want to continue(yes(1)/no(0)) : ");
            choice=Integer.parseInt(dis.readLine());
            if(choice==0)
            {
                System.out.println("****************************************************************");
                System.out.println();
                System.out.println("Ecryption results in the ciphertext : "+s1);
                System.out.println();

//System.exit(0);
                return;
            }

        }
    }

    public static void dec()
    {
        k=0;
        p=s1.length()/n;
        q=s1.length()%n;
//System.out.println("p = "+p+” q = "+q+” d = "+d);

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                a[i][j]='$';

        for(int i=0;i<d.length();i++)
        {
            c=(int)d.charAt(i)-49;
//System.out.println("c = "+c);
            if(c>=q)
            {
                for(int j=0;j<p;j++)
                {
                    a[j][c]=s1.charAt(k++);
                }
            }
            else
            {

                for(int j=0;j<p+1;j++)
                {
                    a[j][c]=s1.charAt(k++);
                }
            }
            dis();
            if(k==s1.length())
            {
                s1="";
                k=0;
                for(int x=0;x<m;x++)
                    for(int j=0;j<n;j++)
                        if(a[x][j]!='$')
                {
                    s1=s1+a[x][j];
                    a[x][j]='$';
                }

            }
        }
        System.out.println("Decryption results in the plaintext : "+s1);
    }

    public static void main(String[] args)
    {
        try
        {

            DataInputStream dis=new DataInputStream(System.in);
            System.out.print("Enter Plain text : ");
            s1=dis.readLine();
            s=new StringBuffer(s1);
//REMOVING WIDE-SPACES
            for(int i=0;i<s.length();i++)
                if(s.charAt(i)==' ')
            s.deleteCharAt(i);

            s1=new String(s);
            d="";
            System.out.println("Enter size of the array ");
            System.out.print("Enter no of rows = ");
            m=Integer.parseInt(dis.readLine());
            System.out.print("Enter no of columns = ");
            n=Integer.parseInt(dis.readLine());
            a=new char[m][n];
            c=0;
                //ENTERING IN THE ARRAY
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    if(c<s1.length())
                        a[i][j]=s1.charAt(c++);
                    else
                        a[i][j]='$';

            dis();
            System.out.println("————————————————————————");
            enc(dis);
            System.out.println("——————————-Decryption——————————-");
            dec();
        }
        catch(Exception e)
        {}
    }
}