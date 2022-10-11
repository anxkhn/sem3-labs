Java – Convert String to int using Integer.parseInt(String)
class StringExample
{
   public static void main(String args[]){
	String str="123";
	int inum = 100;

	/* converting the string to an int value
	 * ,the value of inum2 would be 123 after
	 * conversion
	 */
	int inum2 = Integer.parseInt(str);
		
	int sum = inum+inum2;
	System.out.println("Result is: "+sum);
   }
}

class StringMethodsDemo {
	public static void main(String[] args) {
		String targetString = "Java is fun to learn";
		String s1= "JAVA";
		String s2= "Java";
		String s3 = "  Hello Java  ";
		
		System.out.println("Char at index 2(third position): " + targetString.charAt(2));
		System.out.println("After Concat: "+ targetString.concat("-Enjoy-"));
		System.out.println("Checking equals ignoring case: " +s2.equalsIgnoreCase(s1));
		System.out.println("Checking equals with case: " +s2.equals(s1));
		System.out.println("Checking Length: "+ targetString.length());
		System.out.println("Replace function: "+ targetString.replace("fun", "easy"));
		System.out.println("SubString of targetString: "+ targetString.substring(8));
		System.out.println("SubString of targetString: "+ targetString.substring(8, 12));
		System.out.println("Converting to lower case: "+ targetString.toLowerCase());
		System.out.println("Converting to upper case: "+ targetString.toUpperCase());
		System.out.println("Triming string: " + s3.trim());
		System.out.println("searching s1 in targetString: " + targetString.contains(s1));
		System.out.println("searching s2 in targetString: " + targetString.contains(s2));

		char [] charArray = s2.toCharArray();
		System.out.println("Size of char array: " + charArray.length);
		System.out.println("Printing last element of array: " + charArray[3]);

	}

class StringDemo {

   public static void main(String args[]) {
      String palindrome = "Dot saw I was Tod";
      int len = palindrome.length();
      System.out.println( "String Length is : " + len );
   }
}



class Sample_String{
  public static void main(String[] args){//Character at position
String str_Sample = "RockStar";
System.out.println("Character at position 5: " + str_Sample.charAt(5));
//Index of a given character
System.out.println("Index of character 'S': " + str_Sample.indexOf('S'));}}




class Sample_String{
  public static void main(String[] args){//Convert to LowerCase
String str_Sample = "RockStar";
System.out.println("Convert to LowerCase: " + str_Sample.toLowerCase());
//Convert to UpperCase
System.out.println("Convert to UpperCase: " + str_Sample.toUpperCase());}}




class StringMethods
{
  public static void main(String args[])
  {
    int n;
    String s = "Java programming", t = "", u = "";
   
    System.out.println(s);
   
    // Find length of string
   
    n = s.length();
    System.out.println("Number of characters = " + n);
   
    // Replace characters in string
   
    t = s.replace("Java", "C++");
    System.out.println(s);
    System.out.println(t);
   
    // Concatenating string with another string
   
    u = s.concat(" is fun");
    System.out.println(s);
    System.out.println(u);
  }
}


class StringHandling
{
public static void main(String arg[])
{
String s1="Hitesh";
String s2="Raddy"; 
System.out.println("Combined String: "+s1.concat(s2));
}
}


class StringHandling
{
public static void main(String arg[])
{
String s1="Hitesh";
String s2="Raddy"; 
String s3="Hitesh";
System.out.println("Compare String: "+s1.equals(s2));
System.out.println("Compare String: "+s1.equals(s3));
}
}

class StringHandling
{
public static void main(String arg[])
{
String s1="Hitesh";
String s2="HITESH"; 
String s3="Raddy";
System.out.println("Compare String: "+s1.equalsIgnoreCase(s2));
System.out.println("Compare String: "+s1.equalsIgnoreCase(s3));
}
}

class StringHandling
{
public static void main(String arg[])
{
String s1="Hitesh";
String s2="Raddy";
int i;
i=s1.compareTo(s2);
if(i==0)
{
System.out.println("Strings are same");
}
else
{
System.out.println("Strings are not same");
}
}
}


class StringHandling
{
public static void main(String arg[])
{
String s1="Hitesh";
String s2="HITESH";
int i;
i=s1.compareToIgnoreCase(s2);
if(i==0)
{
System.out.println("Strings are same");
}
else
{
System.out.println("Strings are not same");
}
}
}

class StringHandling
{
public static void main(String arg[])
{
String s="Java is programming language";
System.out.println(s.substring(8)); // 8 is starting index
}
}

class StringHandling
{
public static void main(String arg[])
{
String s="Java is programming language";
System.out.println(s.indexOf("programming"));
}
}


class StringHandling
{
public static void main(String arg[])
{
String s1="Java is programming language";
String s2="Java is good programming language";
System.out.println(s1.lastIndexOf("programming"));
System.out.println(s2.lastIndexOf("programming"));
}
}

class StringHandling
{
public static void main(String arg[])
{
String s="    Java is programming language    ";
System.out.println(s.trim());
}
}



class StringHandling
{
public static void main(String arg[])
{
String s="contact@tutorial4us.com";
String[] s1=s.split("@");  // divide string based on @
for(String c:s1) //  foreach loop 
{
System.out.println(c); 
}
}
}


class StringHandling
{
public static void main(String arg[])
{
String s1="java";
String s2=s1.replace('j', 'k');
System.out.println(s2);
}
}

class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("this is my java code");
System.out.println(sb.insert(11, "first "));
}
}

class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("java is easy");
System.out.println(sb.append(" to learn"));
}
}

class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("This is my code");
System.out.println(sb.replace(8, 10, "java"));
}
}

class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("java"); 
System.out.println(sb.deleteCharAt(3));
}
}

class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("java is easy to learn"); 
StringBuffer s;
s=sb.delete(8, 13);
System.out.println(sb);
}
}


class StringHandling
{
public static void main(String arg[])
{
StringBuffer sb=new StringBuffer("java code");
System.out.println(sb.reverse());
}
}

 Java – Convert String to int using Integer.valueOf(String)
class JavaExample{
   public static void main(String args[]){
	//String with negative sign
	String str="-234";
		
	//An int variable
	int inum = 110;
		
	/* Convert String to int in Java using valueOf() method
	 * the value of variable inum2 would be negative after 
	 * conversion
	 */
	int inum2 = Integer.valueOf(str);
		
	//Adding up inum and inum2
	int sum = inum+inum2;
		
	//displaying sum
	System.out.println("Result is: "+sum);
   }
}

Example 1: Program to reverse a string
public class JavaExample {

    public static void main(String[] args) {
        String str = "Welcome to Beginnersbook";
        String reversed = reverseString(str);
        System.out.println("The reversed string is: " + reversed);
    }

    public static String reverseString(String str)
    {
        if (str.isEmpty())
            return str;
        //Calling Function Recursively
        return reverseString(str.substring(1)) + str.charAt(0);
    }
}



Example 2: Program to reverse a string entered by user
import java.util.Scanner;
public class JavaExample {

    public static void main(String[] args) {
        String str;
        System.out.println("Enter your username: ");
        Scanner scanner = new Scanner(System.in);
        str = scanner.nextLine();
        scanner.close();
        String reversed = reverseString(str);
        System.out.println("The reversed string is: " + reversed);
    }

    public static String reverseString(String str)
    {
        if (str.isEmpty())
            return str;
        //Calling Function Recursively
        return reverseString(str.substring(1)) + str.charAt(0);
    }
}


class Sample_String{
  public static void main(String[] args){
//String Concatenation
String str1 = "Rock";
String str2 = "Star";
//Method 1 : Using concat
String str3 = str1.concat(str2);
System.out.println(str3);
//Method 2 : Using "+" operator
String str4 = str1 + str2;
System.out.println(str4);
}
}

