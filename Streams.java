import java.io.* ; 
import java.util.* ; 
import java.util.stream.* ;  

public class Streams {
	BufferedReader br = new BufferedReader ( new InputStreamReader( System.in ) ) ;
	public static void main( String[] args ) {
		print ( "THIS IS THE PROGRAM FOR THE STREAM OPERATIONS ! " ) ; 
		IntStream.range( 0 , 101 ).forEach( element -> System.out.print( element + " " ) ) ; 
	}
	static void print( Object obj ) {
		System.out.println( obj ) ; 
	}
}
