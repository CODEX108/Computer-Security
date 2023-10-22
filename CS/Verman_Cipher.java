package Cryptology;

import java.util.Scanner;

public class Verman_Cipher {
    static String alphabets = "abcdefghijklmnopqrstuvwxyz";

    public static String encoding(String pText ,String key){
        String plainText = pText.toLowerCase();
        String cipherText = "";

        for (int i=0;i<plainText.length();i++){
            int charInd1 = alphabets.indexOf(plainText.charAt(i));
            int charInd2 = alphabets.indexOf(key.charAt(i));

            int newCharInd = (charInd1+charInd2);
            if(newCharInd>25){
                newCharInd = newCharInd-26;
            }
                char cpt = alphabets.charAt(newCharInd);
                cipherText += cpt;

        }
        return cipherText ;
    }

    public static String decoding(String cipText, String key){
        String ptext="";
        for (int i = 0; i < cipText.length(); i++) {
            int dChar1 = alphabets.indexOf(cipText.charAt(i));
            int dChar2 = alphabets.indexOf(key.charAt(i));

            int newChar = dChar1-dChar2;
            if(newChar<0){
                newChar = newChar+26;
            }
            char plt = alphabets.charAt(newChar);
            ptext += plt;
        }
        return ptext;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the plain text: ");
        String pText = sc.nextLine();
        System.out.println("Enter the key with same length of the plain text: ");
        String key = sc.nextLine();

        String cipherText = encoding (pText,key) ;
        System.out.println("The cipher text is:  "+cipherText);

        System.out.println("The plain text is :"+decoding(cipherText,key));
    }
}
