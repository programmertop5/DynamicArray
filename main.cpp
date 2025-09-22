#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Testing DynamicArray class ===" << endl << endl;

   
    cout << "1. Creating arrays:" << endl;
    DynamicArray arr1;           
    DynamicArray arr2(5);        

    cout << "arr1 size: " << arr1.size() << endl;
    cout << ", capacity: " << arr1.capacity() << endl;
    cout << "arr2  size: " << arr2.size() << endl;
    cout << ", capacity: " << arr2.capacity() << endl;
    cout << endl;

    
    cout << "2. Adding elements:" << endl;
    arr1.add(10);
    arr1.add(20);
    arr1.add(30);

    cout << "arr1 after adding 10, 20, 30:" << endl;
    cout << "Size: " << arr1.size() << endl;
    cout << ", capacity: " << arr1.capacity() << endl;
    cout << "Elements of arr1:" << endl;
    arr1.print();
    cout << endl;

    
    cout << "3. Using operator +=:" << endl;
    arr2 += 100;
    arr2 += 200;
    arr2 += 300;
    arr2 += 400;

    cout << "arr2 after using +=:" << endl;
    cout << "Size: " << arr2.size() << endl;
    cout << ", capacity: " << arr2.capacity() << endl;
    cout << "Elements of arr2:" << endl;
    arr2.print();
    cout << endl;

    
    cout << "4. Accessing elements:" << endl;
    cout << "arr1[0] = " << arr1[0] << endl;
    cout << "arr1[1] = " << arr1[1] << endl;
    cout << "arr1.get(2) = " << arr1.get(2) << endl;
    cout << "arr2[0] = " << arr2[0] << endl;
    cout << endl;

    
    cout << "5. Modifying elements using []:" << endl;
    arr1[0] = 99;
    arr1[1] = 88;
    cout << "arr1 after modifying first two elements:" << endl;
    arr1.print();
    cout << endl;

    
    cout << "6. Merging arrays (operator +):" << endl;
    DynamicArray arr3 = arr1 + arr2;
    cout << "arr3 = arr1 + arr2:" << endl;
    cout << "Size: " << arr3.size() << ", capacity: " << arr3.capacity() << endl;
    cout << "Elements of arr3:" << endl;
    arr3.print();
    cout << endl;

    
    cout << "7. Removing elements:" << endl;
    cout << "arr1 before removing:" << endl;
    arr1.print();

    arr1.remove(1); 
    cout << "arr1 after removing element at index 1:" << endl;
    cout << "Size: " << arr1.size() << endl;
    arr1.print();
    cout << endl;

    
    cout << "8. Assignment operator (operator =):" << endl;
    DynamicArray arr4;
    arr4 = arr2;
    cout << "arr4 = arr2 (copy):" << endl;
    cout << "Size: " << arr4.size() << ", capacity: " << arr4.capacity() << endl;
    arr4.print();
    cout << endl;

    
    cout << "9. Copy constructor:" << endl;
    DynamicArray arr5(arr2);
    cout << "arr5(arr2) - copy using constructor:" << endl;
    cout << "Size: " << arr5.size() << endl;
    cout << ", capacity: " << arr5.capacity() << endl;
    arr5.print();
    cout << endl;

    
    cout << "10. Comparing arrays (operator ==):" << endl;
    cout << "arr2 == arr4: ";
    if (arr2 == arr4) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    cout << "arr2 == arr5: ";
    if (arr2 == arr5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    cout << "arr1 == arr2: ";
    if (arr1 == arr2) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    cout << endl;

    
    cout << "11. Testing automatic expansion:" << endl;
    DynamicArray arr6;
    cout << "Initial capacity of arr6: " << arr6.capacity() << endl;

    for (int i = 0; i < 5; i++) {
        arr6.add(i * 10);
        cout << "Added " << i * 10
            << ", capacity: " << arr6.capacity()
            << ", size: " << arr6.size() << endl;
    }
    cout << "Final arr6:" << endl;
    arr6.print();
    cout << endl;

    cout << "End" << endl;

    return 0;
}
