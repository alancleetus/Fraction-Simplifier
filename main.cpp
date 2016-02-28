//Alan Cleetus
//simplify


#include <iostream>
using namespace std;

struct Fraction
{
 int num;
 int den;
};


Fraction simplify(Fraction);
void getFactors(int fa[],int);
int getGCM(int fa[],int fb[]);

int main()
{
    Fraction f1;

    cout<<"\nnumerator 1: ";
    cin>>f1.num;

    cout<<"\ndenominator 1: ";
    cin>>f1.den;

    //cout<<"\nnumerator 1: ";
    //cin>>f2.num;

    //cout<<"\ndenominator 2: ";
    //cin>>f2.den;

    int gcm;

    int fa[100];

    int fb[100];


    getFactors(fa,f1.num);

    getFactors(fb,f1.den);


    gcm = getGCM(fa,fb);

    cout<<"GCM : " <<gcm;

    cout<<endl<<f1.num<<"/"<<f1.den<<"  =  "<<(f1.num/gcm)<<"/"<<(f1.den/gcm)<<endl;

    //cout<<"the factors are ";

    //for(int i= 0; i<(elements+1)&& fa[i]!='\0'; i ++){

     //   cout<<i<<": "<<fa[i];
    //    cout<<endl;
    //}

    //cout<<f2.num<<"/"<<f2.den<<endl;


    return 0;
}

void getFactors(int fa[], int f1){


        int j = 0;


    for(int i=1; i<f1;i++){

        int num = 0;

        int a = f1%i;

        if(a==0){

             num = i;

        }

        if(num > 0){

            fa[j] = num;


            j++;
        }
    }

}


int getGCM(int fa[],int fb[]){

    int gcm = 0 ;

    for(int i=0; i<10; i++){

        int comp1 = fa[i] ;

        int j = 0;
         for(; j<10; j++){

            int comp2 = fb[j] ;

            if(comp1==comp2&&comp1>gcm){

                gcm = comp1;

            }

        }

    }

    return gcm;
}


