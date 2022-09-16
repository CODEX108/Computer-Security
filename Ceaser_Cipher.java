package Cryptology;

import java.util.Scanner;


public class Ceaser_Cipher {
    static String alphabets = "abcdefghijklmnopqrstuvwxyz";

  public static String encoding(String pText , int key){
      //converts the user i/p to lower case
      String plainText = pText.toLowerCase();
      String cipherText = "";

      for (int i =0;i<plainText.length();i++){
          /*eg : PT= hello , key = 3 here
          * plainText.charAt(i) =  while i = 0 -> h
          * alphabets.indexOf(h) gives 7 therefore charIndex = 7 */
          int charIndex = alphabets.indexOf(plainText.charAt(i));
          // newIndex = (7+3)%26 = 10%26 = 0
          int newIndex = (charIndex+key)%26;
         char cpt =  alphabets.charAt(newIndex);
          cipherText +=cpt;
      }
      return cipherText;
  }

  public static String decoding (String cipherText , int key){
      String ptext ="";
      for (int i=0;i<cipherText.length();i++) {
          int charIndex = alphabets.indexOf(cipherText.charAt(i));
          int newIndex = (charIndex-key)%26;
          if (newIndex <0){
              newIndex = alphabets.length()+newIndex;
          }
          char plt = alphabets.charAt(newIndex);
          ptext += plt;
      }
      return ptext;
  }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the plain text: ");
        String pText = sc.nextLine();
        System.out.println("Enter the key: ");
        int key = sc.nextInt();

        String cipherText = encoding (pText,key) ;
        System.out.println("The cipher text is:  "+cipherText);

        System.out.println("The plain text is :"+decoding(cipherText,key));

    }


}
