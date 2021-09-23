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

