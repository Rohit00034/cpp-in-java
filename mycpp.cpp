#include <iostream>
#include "Ch.h"  /* THIS IS generated JNI header,THIS WON'T WORK UNTIL YOU COMPILE 
CH.JAVA INTO AN HEADER FILE */ 
using namespace std;

// Implement the native method
JNIEXPORT void JNICALL Java_Ch_myimprt(JNIEnv* env, jobject obj) {
    cout << "Hello from cpp" << endl;
}
int main(){
    
    return 0;
}