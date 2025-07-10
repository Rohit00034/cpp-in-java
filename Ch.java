public class Ch{
public native void myimprt();
static{
    System.loadLibrary("libmycpp.so"); /*YOU WILL NEED TO CREATE A 
    .SO(SHARED OBJECT FILE) OF MYCPP.CPP IN ORDER TO USE THE CPP FILE HERE */ 
}    
public static void main(String[] args){
System.out.println(("Hellfire"));
new Ch().myimprt();
}
};