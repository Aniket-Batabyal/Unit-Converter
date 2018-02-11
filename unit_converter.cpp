#include <iostream>
#include <fstream>
using namespace std;
class kil_m{
    int x,y;
    float km=0;
    float m=0;
public:
    kil_m(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of kilometers : ";
            cin>>km;
        }else{
            cout<<"\nenter the value of meters : ";
            cin>>m;
        }
    }
    void calc(){
        if(x<y){
            m=km*1000;
        }else{
            km=m/1000;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<km<<" kilometers are "<<m<<" meters."<<endl;
        }else{
            cout<<endl<<m<<" meters are "<<km<<" kilometers."<<endl;
        }
    }
};
class kil_cm{
    int x,y;
    float km=0;
    float cm=0;
public:
    kil_cm(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of kilometers : ";
            cin>>km;
        }else{
            cout<<"\nenter the value of centimeters : ";
            cin>>cm;
        }
    }
    void calc(){
        if(x<y){
            cm=km*100000;
        }else{
            km=cm/100000;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<km<<" kilometers are "<<cm<<" centimeters."<<endl;
        }else{
            cout<<endl<<cm<<" centimeters are "<<km<<" kilometers."<<endl;
        }
    }
};
class kil_mil{
    int x,y;
    float km=0;
    float mm=0;
public:
    kil_mil(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of kilometers : ";
            cin>>km;
        }else{
            cout<<"\nenter the value of millimeters : ";
            cin>>mm;
        }
    }
    void calc(){
        if(x<y){
            mm=km*1000000;
        }else{
            km=mm/1000000;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<km<<" kilometers are "<<mm<<" millimeters."<<endl;
        }else{
            cout<<endl<<mm<<" millimeters are "<<km<<" kilometers."<<endl;
        }
    }
};
class kil_mile{
    int x,y;
    float km=0;
    float mil=0;
public:
    kil_mile(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of kilometers : ";
            cin>>km;
        }else{
            cout<<"\nenter the value of miles : ";
            cin>>mil;
        }
    }
    void calc(){
        if(x<y){
            mil=km/1.60934;
        }else{
            km=mil*1.60934;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<km<<" kilometers are "<<mil<<" miles."<<endl;
        }else{
            cout<<endl<<mil<<" miles are "<<km<<" kilometers."<<endl;
        }
    }
};
class kil_foot{
    int x,y;
    float km=0;
    float foot=0;
public:
    kil_foot(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of kilometers : ";
            cin>>km;
        }else{
            cout<<"\nenter the value of foots : ";
            cin>>foot;
        }
    }
    void calc(){
        if(x<y){
            foot=km*3280.84;
        }else{
            km=foot/3280.84;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<km<<" kilometers are "<<foot<<" foots."<<endl;
        }else{
            cout<<endl<<foot<<" foots are "<<km<<" kilometers."<<endl;
        }
    }
};
class m_cm{
    int x,y;
    float m=0;
    float cm=0;
public:
    m_cm(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of meters : ";
            cin>>m;
        }else{
            cout<<"\nenter the value of centimeters : ";
            cin>>cm;
        }
    }
    void calc(){
        if(x<y){
            cm=m*100;
        }else{
            m=cm/100;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<m<<" meters are "<<cm<<" centimeters."<<endl;
        }else{
            cout<<endl<<cm<<" centimeters are "<<m<<" meters."<<endl;
        }
    }
};
class m_mil{
    int x,y;
    float m=0;
    float mil=0;
public:
    m_mil(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of meters : ";
            cin>>m;
        }else{
            cout<<"\nenter the value of millimeters : ";
            cin>>mil;
        }
    }
    void calc(){
        if(x<y){
            mil=m*1000;
        }else{
            m=mil/1000;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<m<<" meters are "<<mil<<" millimeters."<<endl;
        }else{
            cout<<endl<<mil<<" millimeters are "<<m<<" meters."<<endl;
        }
    }
};
class m_mile{
    int x,y;
    float m=0;
    float mile=0;
public:
    m_mile(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of meters : ";
            cin>>m;
        }else{
            cout<<"\nenter the value of miles : ";
            cin>>mile;
        }
    }
    void calc(){
        if(x<y){
            mile=m/1609.34;
        }else{
            m=mile*1609.34;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<m<<" meters are "<<mile<<" miles."<<endl;
        }else{
            cout<<endl<<mile<<" miles are "<<m<<" meters."<<endl;
        }
    }
};
class m_foot{
    int x,y;
    float m=0;
    float foot=0;
public:
    m_foot(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of meters : ";
            cin>>m;
        }else{
            cout<<"\nenter the value of foots : ";
            cin>>foot;
        }
    }
    void calc(){
        if(x<y){
            foot=m*3.28084;
        }else{
            m=foot/3.28084;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<m<<" meters are "<<foot<<" foots."<<endl;
        }else{
            cout<<endl<<foot<<" foots are "<<m<<" meters."<<endl;
        }
    }
};
class cm_mil{
    int x,y;
    float cm=0;
    float mil=0;
public:
    cm_mil(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of centimeters : ";
            cin>>cm;
        }else{
            cout<<"\nenter the value of millimeters : ";
            cin>>mil;
        }
    }
    void calc(){
        if(x<y){
            mil=cm*10;
        }else{
            cm=mil/10;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<cm<<" centimeters are "<<mil<<" millimeters."<<endl;
        }else{
            cout<<endl<<mil<<" millimeters are "<<cm<<" centimeters."<<endl;
        }
    }
};
class cm_mile{
    int x,y;
    float cm=0;
    float mile=0;
public:
    cm_mile(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of centimeters : ";
            cin>>cm;
        }else{
            cout<<"\nenter the value of miles : ";
            cin>>mile;
        }
    }
    void calc(){
        if(x<y){
            mile=cm/160934;
        }else{
            cm=mile*160934;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<cm<<" centimeters are "<<mile<<" miles."<<endl;
        }else{
            cout<<endl<<mile<<" miles are "<<cm<<" centimeters."<<endl;
        }
    }
};
class cm_foot{
    int x,y;
    float cm=0;
    float foot=0;
public:
    cm_foot(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of centimeters : ";
            cin>>cm;
        }else{
            cout<<"\nenter the value of foots : ";
            cin>>foot;
        }
    }
    void calc(){
        if(x<y){
            foot=cm/30.48;
        }else{
            cm=foot*30.48;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<cm<<" centimeters are "<<foot<<" foots."<<endl;
        }else{
            cout<<endl<<foot<<" foots are "<<cm<<" centimeters."<<endl;
        }
    }
};
class mil_mile{
    int x,y;
    float mil=0;
    float mile=0;
public:
    mil_mile(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of millimeters : ";
            cin>>mil;
        }else{
            cout<<"\nenter the value of miles : ";
            cin>>mile;
        }
    }
    void calc(){
        if(x<y){
            mile=mil/1609340;
        }else{
            mil=mile*1609340;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<mil<<" millimeters are "<<mile<<" miles."<<endl;
        }else{
            cout<<endl<<mile<<" miles are "<<mil<<" millimeters."<<endl;
        }
    }
};
class mil_foot{
    int x,y;
    float mil=0;
    float foot=0;
public:
    mil_foot(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of millimeters : ";
            cin>>mil;
        }else{
            cout<<"\nenter the value of foots : ";
            cin>>foot;
        }
    }
    void calc(){
        if(x<y){
            foot=mil/304.8;
        }else{
            mil=foot*304.8;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<mil<<" millimeters are "<<foot<<" foots."<<endl;
        }else{
            cout<<endl<<foot<<" foots are "<<mil<<" millimeters."<<endl;
        }
    }
};
class mile_foot{
    int x,y;
    float mile=0;
    float foot=0;
public:
    mile_foot(int a,int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of miles : ";
            cin>>mile;
        }else{
            cout<<"\nenter the value of foots : ";
            cin>>foot;
        }
    }
    void calc(){
        if(x<y){
            foot=mile*5280;
        }else{
            mile=foot/5280;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<mile<<" miles are "<<foot<<" foots."<<endl;
        }else{
            cout<<endl<<foot<<" foots are "<<mile<<" miles."<<endl;
        }
    }
};
class c_f{
    int x,y;
    float c;
    float f;
public:
    c_f(int a, int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of celsius : ";
            cin>>c;
        }else{
            cout<<"\nenter the value of fahrenheit : ";
            cin>>f;
        }
    }
    void calc(){
        if(x<y){
            f=c*1.8+32;
        }else{
            c=(f-32)/1.8;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<c<<" celcius are "<<f<<" fahrenheits."<<endl;
        }else{
            cout<<endl<<f<<" fahrenheits are "<<c<<" celsius."<<endl;
        }
    }
};
class c_k{
    int x,y;
    float c;
    float k;
public:
    c_k(int a, int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of celsius : ";
            cin>>c;
        }else{
            cout<<"\nenter the value of kelvin : ";
            cin>>k;
        }
    }
    void calc(){
        if(x<y){
            k=c+273.15;
        }else{
            c=k-273.15;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<c<<" celcius are "<<k<<" kelvins."<<endl;
        }else{
            cout<<endl<<k<<" kelvins are "<<c<<" celsius."<<endl;
        }
    }
};
class f_k{
    int x,y;
    float f;
    float k;
public:
    f_k(int a, int b){
        x=a;
        y=b;
    }
    void getdata(){
        if(x<y){
            cout<<"\nenter the value of Fahrenheit : ";
            cin>>f;
        }else{
            cout<<"\nenter the value of kelvin : ";
            cin>>k;
        }
    }
    void calc(){
        if(x<y){
            k=(f*1.8+32)+273.15;
        }else{
            f=(k-273.15)*1.8+32;
        }
    }
    void putdata(){
        if(x<y){
            cout<<endl<<f<<" fahrenheits are "<<k<<" kelvins."<<endl;
        }else{
            cout<<endl<<k<<" kelvins are "<<f<<" fahrenheits."<<endl;
        }
    }
};
void LENGTH(){
    int a,b;
    cout<<"\nINDEX : "<<endl;
    cout<<"1 - kilometer"<<endl;
    cout<<"2 - meter"<<endl;
    cout<<"3 - centimeter"<<endl;
    cout<<"4 - millimeter"<<endl;
    cout<<"5 - mile"<<endl;
    cout<<"6 - foot"<<endl;
    cout<<"\nEnter 2 numbers for 'from' and 'to' : ";
    cin>>a>>b;
    if(a==b){
        cout<<"\nthey are equal."<<endl;
    }else if((a==1 && b==2) || (a==2 && b==1)){
        kil_m mk1(a,b);
        mk1.getdata();
        mk1.calc();
        mk1.putdata();
    }else if((a==1 && b==3) || (a==3 && b==1)){
        kil_cm ck1(a,b);
        ck1.getdata();
        ck1.calc();
        ck1.putdata();
    }else if((a==1 && b==4) || (a==4 && b==1)){
        kil_mil mk1(a,b);
        mk1.getdata();
        mk1.calc();
        mk1.putdata();
    }else if((a==1 && b==5) || (a==5 && b==1)){
        kil_mile mk1(a,b);
        mk1.getdata();
        mk1.calc();
        mk1.putdata();
    }else if((a==1 && b==6) || (a==6 && b==1)){
        kil_foot fk1(a,b);
        fk1.getdata();
        fk1.calc();
        fk1.putdata();
    }else if((a==2 && b==3) || (a==3 && b==2)){
        m_cm mc1(a,b);
        mc1.getdata();
        mc1.calc();
        mc1.putdata();
    }else if((a==2 && b==4) || (a==4 && b==2)){
        m_mil mm1(a,b);
        mm1.getdata();
        mm1.calc();
        mm1.putdata();
    }else if((a==2 && b==5) || (a==5 && b==2)){
        m_mile mc1(a,b);
        mc1.getdata();
        mc1.calc();
        mc1.putdata();
    }else if((a==2 && b==6) || (a==6 && b==2)){
        m_foot mf1(a,b);
        mf1.getdata();
        mf1.calc();
        mf1.putdata();
    }else if((a==3 && b==4) || (a==4 && b==3)){
        cm_mil cm1(a,b);
        cm1.getdata();
        cm1.calc();
        cm1.putdata();
    }else if((a==3 && b==5) || (a==5 && b==3)){
        cm_mile cm1(a,b);
        cm1.getdata();
        cm1.calc();
        cm1.putdata();
    }else if((a==3 && b==6) || (a==6 && b==3)){
        cm_foot cf1(a,b);
        cf1.getdata();
        cf1.calc();
        cf1.putdata();
    }else if((a==4 && b==5) || (a==5 && b==4)){
        mil_mile mm1(a,b);
        mm1.getdata();
        mm1.calc();
        mm1.putdata();
    }else if((a==4 && b==6) || (a==6 && b==4)){
        mil_foot mf1(a,b);
        mf1.getdata();
        mf1.calc();
        mf1.putdata();
    }else if((a==5 && b==6) || (a==6 && b==5)){
        mile_foot mf1(a,b);
        mf1.getdata();
        mf1.calc();
        mf1.putdata();
    }
}
void SPEED(){
    int a,b;
    cout<<"\nINDEX :"<<endl;
    cout<<"1- Miles per Hour"<<endl;
    cout<<"2- Foot per second"<<endl;
}
void CURRENCY(){

}
void TEMPERATURE(){
    int a,b;
    cout<<"\nINDEX : "<<endl;
    cout<<"1 - Celsius"<<endl;
    cout<<"2 - Fahrenheit"<<endl;
    cout<<"3 - Kelvin"<<endl;
    cout<<"\nEnter 2 numbers for 'from' and 'to' : ";
    cin>>a>>b;
    if(a==b){
        cout<<"\nthey are equal."<<endl;
    }else if((a==1 && b==2) || (a==2 && b==1)){
        c_f cf1(a,b);
        cf1.getdata();
        cf1.calc();
        cf1.putdata();
    }else if((a==1 && b==3) || (a==3 && b==1)){
        c_k ck1(a,b);
        ck1.getdata();
        ck1.calc();
        ck1.putdata();
    }else if((a==2 && b==3) || (a==3 && b==2)){
        f_k fk1(a,b);
        fk1.getdata();
        fk1.calc();
        fk1.putdata();
    }
}
void TIME(){

}
void MASS(){

}
void DIGITAL(){

}
void VOLUME(){

}
void check(int b){
    if(b==1){
        LENGTH();
    }else if(b==2){
        SPEED();
    }else if(b==3){
        CURRENCY();
    }else if(b==4){
        TEMPERATURE();
    }else if(b==5){
        TIME();
    }else if(b==6){
        MASS();
    }else if(b==7){
        DIGITAL();
    }else if(b==8){
        VOLUME();
    }
}
int input(){
    int a;
    cout<<"\nEnter the number for the type of conversions you want to perform : ";
    cin>>a;
    return a;
}
void welcome(int a){
    cout<<"\nWelcome to the Unit Converter!!!\n"<<endl<<"type 1 to see the index or 0 to continue : ";
    cin>>a;
    switch (a){
    case 1:
        cout<<"\nINDEX :"<<endl;
        cout<<"type 1 for    LENGTH   conversions"<<endl;
        cout<<"type 2 for    SPEED    conversions"<<endl;
        cout<<"type 3 for   CURRENCY  conversions"<<endl;
        cout<<"type 4 for TEMPERATURE conversions"<<endl;
        cout<<"type 5 for     TIME    conversions"<<endl;
        cout<<"type 6 for     MASS    conversions"<<endl;
        cout<<"type 7 for    DIGITAL  conversions"<<endl;
        cout<<"type 8 for    VOLUME   conversions"<<endl;
        break;
    case 0:
        break;
    default:
        cout<<"\ninvalid input considered as 0"<<endl;
        break;
    }

}
int main(){
    int x;
    cout<<"\nsENTER 1 TO BEGIN : ";
    cin>>x;
    while(x==1){
        int a;
        welcome(a);
        int b=input();
        check(b);
        x=0;
        cout<<"\nTHANKS FOR USING OUR SOFTWARE!!!"<<endl;
        cout<<"\nENTER 1 TO BEGIN : ";
        cin>>x;
    }
    return 0;
}
