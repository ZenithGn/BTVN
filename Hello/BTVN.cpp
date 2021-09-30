//câu 1
#include <iostream>

int main()
{
    std::cout << "\"Trường hôc thân thiện, học sinh tính cực\"";
}

//câu 2
#include <iostream>

int main()
{
    std::cout << "\"Học sinh Trường THPT Nguyễn Chí Thanh\n\Sống có trách nhiệm với bản thân\"";
}


//câu 3a
#include <iostream>

int main()
{
    std::cout << "*\n\**\n\***\n\****";
}
//câu 3b
#include <iostream>

int main()
{
    std::cout << "*****\n\*****\n\*****";
}


//câu 4
#include <iostream>

using namespace std;

int main()
{
    int a,c,s;
    cout<<"Nhập độ dài cạnh a = ";
    cin>>a;
    c= 4*a;
    s= a*a;
    
    cout<<"Chu vi hình vuông là : "<<c<<"\n";
    cout<<"Diện tích hình vuông là : "<<s;

    return 0;
}

//câu 5
#include <iostream>

using namespace std;

int main()
{
    int dai,rong,c,s;
    cout<<"Nhập chiều dài : ";
    cin>>dai;
    cout<<"Nhập chiều rộng : ";
    cin>>rong;
    
    c= dai*rong;
    s= (dai+rong)*2;
    
    cout<<"Chu vi hình chữ nhật là : "<<c<<"\n";
    cout<<"Diện tích hình chữ nhật là : "<<s;
    
    return 0;
}

//câu 6
#include <iostream>
#define PI 3.14159265359

using namespace std;

int main()
{
    float R,c,s;
    cout<<"Nhập bán kính : ";
    cin>>R;
    c= 2*PI*R;
    s= PI*R*R;
 
    cout<<"Chu vi hình tròn là : "<<c<<"\n";
    cout<<"Diện tích hình tròn là : "<<s;
    
    return 0;
}

//hoặc
#include <iostream>

int main()
{
    float R,c,s;
    std::cout<<"Nhập bán kính : ";
    std::cin>>R;
    
    c= 2*3.14*R;
    s= 3.14*R*R;
 
    std::cout<<"Chu vi hình tròn là : "<<c<<"\n";
    std::cout<<"Diện tích hình tròn là : "<<s;
    
    return 0;
}


/*câu 7
khi đang chạy code trên terminal nhập hết a,b,c và chỉ ra chu vi và P thì đừng vội mà bấm stop. Lúc đó bấm "Enter" và nhập "Số P" mới tính ra được trên terminal và Enter là sẽ ra diện tích tam giác. Hơi cồng kềnh sẽ sửa lại sau.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
 
     float a,b,c,p,s;
 
     cout << "Nhập độ dài cạnh a= "; 
     cin>>a;
 
      cout << "Nhập độ dài cạnh b= "; 
      cin>>b;
 
      cout << "Nhập độ dài cạnh c= "; 
      cin>>c;

      cout << "Chu vi tam giác là: " << a+b+c <<endl;
      
      cout << "p= " << (a+b+c)/2;
      cin >> p; 
 
      s= sqrt(p*(p-a)*(p-b)*(p-c));
      
      cout << "Diện tích tam giác là: " <<s ; 
      
 return 0;
}

// câu 8

#include <math.h>
#include <iostream>

int main() {
    int xA, yA, xB, yB, xM, yM;

    std::cout<<"Nhập X và Y của A vào đây";
    std::cin>>xA >>yA;
    std::cout<<"Nhập X và Y của B vào đây";
    std::cin>>xB >>yB;

    xM = (xA + xB)/2;
    yM = (yA + yB)/2;
    
    std::cout<< "Vậy xM là : "<<xM<<"\n";
    std::cout<<"Vậy yM là :"<<yM;
    return 0;
}
