﻿//câu 1
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
    float a;
    cout<<"Nhập độ dài cạnh a = ";
    cin>>a;
    
    cout<<"Chu vi hình vuông là : "<<4*a<<"\n";
    cout<<"Diện tích hình vuông là : "<<a*a<<"\n";

    return 0;
}

//câu 5
include <iostream>

using namespace std;

int main()
{
    float dai,rong;
    cout<<"Nhập chiều dài : ";
    cin>>dai;
    cout<<"Nhập chiều rộng : ";
    cin>>rong;
    
    cout<<"Chu vi hình chữ nhật là : "<<dai*rong<<"\n";
    cout<<"Diện tích hình chữ nhật là : "<<(dai+rong)*2;
    
    return 0;
}

//câu 6
#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    float R;
    cout<<"Nhập bán kính : ";
    cin>>R;
 
    cout<<"Chu vi hình tròn là : "<<2*PI*R<<"\n";
    cout<<"Diện tích hình tròn là : "<<PI*R*R<<"\n";
    
    return 0;
}
