// ************************C++ Practice Programs*************************** 

// // 1))

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
   cout<<"Hello World";

   getch();
}


// // 2))

#include<iostream>
#include<conio.h>
#include<stdio.h>

int main()
{
    std::cout<<"Hello World";

    getch();
}


// // 3))

#include<iostream>

int main()
{
   std::cout<<"Hello World \n";

   std::cout<<"I am learning c++";

   return 0;
}


// // 4))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a = 84;

    int a = 25,b = 98;

    cout<<a;

    cout<<a+b;

    getch();
} 


// // 5))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    string name = "Faraz";

    name = "Mohammad";

    cout<<name;

    getch();
}


// // 6))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double num = 26.21;

    cout<<num;

    getch();
}


// // 7))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int myAge = 21;

    cout<<"Alhumdolillah I am "<<myAge<<" years old";

    getch();
}


// // 8))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x;

    cout<<"Enter any Number: ";

    cin>>x;

    cout<<"Result: "<<x;

    getch();
}


// // 9))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x,y,sum;

    cout<<"Enter first Number: ";

    cin>>x;

    cout<<"Enter Second Number: ";

    cin>>y;
    
    sum = x + y;

    cout<<"Result: "<<sum;

    getch();
}


// // 10))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x=10;

    x += 15;

    cout<<x;

    getch();
}


// // 11))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x =8, y = 5;

    cout<<(x<y);      //  False

    cout<<(x>y);      //  True

    getch();
}


// // 11))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    string firstname = "Mohammad";

    string Lastname = "Faraz";

    string FullName = firstname + " " + Lastname;

    cout<< FullName;

    getch();
}



// // 12))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    string firstname = "Mohammad";

    string Lastname = " Faraz";

    string FullName = firstname.append(Lastname);   // append() function is basically 
//                                                     // a concatination

    cout<< FullName;

    getch();
}


// // 13))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    string text = "1f5a1fas51fas35f1as35f1a3s5f1as351fas35fasfasgadga#%#";

    cout<<"The Length of text is: " <<text.length();

    cout<<"The Size of text is: " <<text.size();

    getch();
}


// // 14))

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    string myString = "Aryan";

    myString[0] = 'A';

    cout<< myString;

    getch();
}


// // 15))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Hello";

    getch();
}



// // 16))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x = 166, y = 417;

    // cout<<max(x,y);

    cout<<min(x,y);

    getch();
}


// 17))

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    int x = 166, y = 417;

    cout<<sqrt(x);
    cout<<endl;
    cout<<round(10);
    cout<<endl;
    cout<<log(y);
    cout<<endl;
    cout<<tan(5);
    cout<<endl;
    cout<<sin(16);
    cout<<endl;
    cout<<cos(90);
    cout<<endl;
    cout<<ceil(15.1);
    cout<<endl;
    cout<<floor(6.5);
    cout<<endl;
    cout<<tanh(6.2);

    getch();
}


// 18))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int age = 21;

    if(age < 20)
    {
        cout<<"Age is less than 21";
    }
    else{
        cout<<"Age is greater than 21";
    }

    getch();
}


// 19))

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int age = 21;

    string result = (age < 20) ? "Age is less than 21" : "Age is greater than 21";
        //   Short-Hand  If-else Condition
        
    cout<< result;

    getch();
}