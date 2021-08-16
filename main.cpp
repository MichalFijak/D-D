#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#include <time.h>

using namespace std;
float x,y;
char wybor;
int k1,k2,i, rand(void);
int equipment[3];
int lsword=4, sword=2, knife=-1,shield=2,ring=1,chest=3,boots=2,ring2=1;
string stats[3];
int life=3,attack=0,armor=0;
int weapon, armory,lifeup;
staty()
{
    //for(int i=0;i<2;i++) to tak na przyszlosc jakby rozbudowac system eq
        if (equipment[1]=weapon) attack=attack+weapon; // w sumie to mozna tez to podmienic na bool'a true/false
        if (equipment[2]=armory) armor=armor+armory;   // ze sie sprawdza czy jest w  eq pierscien czy cos
        if (equipment[0]=lifeup) life=life+lifeup;

        cout<<"\t"<<"\t"<<"Zycie: "<<life<<"\t"<<"Attak: "<<attack<<"\t"<<"Pancerz: "<<armor;
}





death()
{
    PlaySound(TEXT("ws.wav"),NULL,SND_SYNC);
    cout<<"\t"<<"============================================================="<<endl;
    cout<<"\t"<<"                                                             "<<endl;
    cout<<"\t"<<" Twoja podroz zakonczyla sie tak samo szybko, jak zaczela... "<<endl;
    cout<<"\t"<<"                  ======UMARLES======                        "<<endl;
    exit(0);
}

kosci()
{
        srand(time(NULL));
        k1=(rand()%10+2)/2;
        k2=(rand()%10+2)/2; //moze wykorzystac wskaznik, zawsze to pomoze przy "chwaleniu sie"

}

labirynt0()
{
    system("CLS");
    staty();
    if (attack>=0){
        cout<<endl;
        cout<<endl;
        cout<<"\t"<<"W sumie to cieszysz sie ze nie zagrales z goblinem,"<<endl;
        cout<<"\t"<<"Kto wie jak taka bestyja moze zareagowac po przegranej"<<endl;
    }
    if (attack<0){
        cout<<endl;
        cout<<endl;
        cout<<"\t"<<"Dopiero teraz zauwazasz ze otrzymany od goblina przedmiot,"<<endl;
        cout<<"\t"<<"jest nic nie wartym rupieciem.. dodatkowo oblozonym klatwa!"<<endl;
    }
    cout<<endl;
    cout<<endl;

}
kosci0()
{
        system("CLS");

        staty();
        cout<<endl;
        cout<<endl;
        cout<<"\t"<<"Humanoid rzuca koscmi... jego wynik to 6!"<<endl;
        cout<<"\t"<<"Cholera nie idzie mi dzis... - mamrocze."<<endl;


    while(!(k1+k2>6))
    {
        cout<<endl;
        cout<<endl;
        cout<<"\t"<<"Bierzesz kosci i rzucasz!"<<endl;
        kosci();
        cout<<"\t"<<"Twoj wynik to: "<<k1<<" i "<<k2<<endl;

        if ((k1+k2)==6)
        {

        cout<<"\t"<<"HA! Remis! Niech bedzie dam Ci jeszcze jedna szanse! Przezucaj!"<<endl;
        getch(); //tutaj menu z wyborem kosci 1 lub 2 lub obie

        }

        if ((k1+k2)<6)
        {

        cout<<"\t"<<"HA! Wygralem! Ale dobra, znaj moja dobroc zoltodziobie dam Ci jeszcze jedna szanse! Przezucaj kosci!"<<endl;
        getch();


        }
    }
        cout<<endl;
        cout<<endl;
        cout<<"\t"<< "Cholera, pewnie oszukiwales... no dobra o to Twoja nagroda..."<<endl;
        cout<<"\t"<< "Otrzymujesz plastikowy noz..."<<endl;
        cout<<"\t"<< "Nie pytaj mnie skad go mam, to jakis relikt przeszlosci, wszedzie tego pelno.."<<endl;
        cout<<endl;
        cout<<"\t"<< "Niechetnie odbierasz nagrode od goblina po czym bestyja znika!"<<endl;
        cout<<"\t"<<"Dobre i to. - Stwierdzasz, wymachujac w powietrzu ostrzem"<<endl;
        weapon=knife;
        equipment[1]=weapon;

        getch();
        labirynt0();


}

Spotkanie0()
{
    system("CLS");
    staty();
    cout<<endl;
    cout<<endl;
    cout<<"\t"<<"Zmierzajac do XXXX napotykasz szczfanego goblina. Jego wyglad sugeruje"<<endl;
    cout<<"\t"<<"na dosc niska inteligencje. Proponuje on rozegranie krotkiej partii w kosci"<<endl;
    cout<<"\t"<<"Co mu odpowiesz?"<<endl;
    for(;;)
    {
        cout<<"\t"<<"\t"<<"\t"<<"-------------------------"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 1. Jasne nie ma problemu."<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 2. Nie dzieki."<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 3. Chyba nie wiesz z kim zadzierasz."<<endl;
        cout<<endl;
        wybor=getch();

        switch(wybor)
        {
        case '1':
            cout<<"\t"<<"Dawaj rzniemy"<<endl;
            cout<<"\t"<<"Iihaa - goblin zarzal jak kon i wyciagnal kosci"<<endl;
            kosci0();
            exit(0);
            break;
        case '2':
            cout<<"\t"<<"Nie dzieki Panie goblin."<<endl;
            cout<<"\t"<<"Mijasz obojetnego goblina, po czym kazdy z was rusza w swoja droge."<<endl;
            labirynt0();
            exit(0);
            break;
        case '3':
            cout<<"\t"<<" Hola hola, to cos z przodu twojej glowy to twarz czy dupa? - rzucasz do goblina obelga"<<endl;
            cout<<"\t"<<" Ty rzucic we mnie miesem, to ja rzucic cie w przepasc! "<< "- mem z rudym dla kumatych ;]"<<endl;
            getch();
            death();
            break;
        default:
            cout<<"\t"<<"Nie ma takiej opcji"<<endl;
        }
    }
}
rozdzial1()
{
    system("CLS");
    cout<<"\t"<<"Dawno dawno temu w nie tak odleglej galaktyce...."<<endl;
    cout<<"\t"<<"Byla jaskinia do ktorej Ci sie wpadlo"<<endl;
    cout<<"\t"<<"Podazajac za niewyraznymi wskazowkami probujesz,"<<endl;
    cout<<"\t"<<"odnalezc wyjscie zbierajac przy tym rozne bibeloty"<<endl;
    cout<<"\t"<<"i oczywiscie starajac sie nie umrzec.."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t"<<"a tak miedzy nami, wcale, a wcale nie lubie gwiezdnych wojen"<<endl;
    //PlaySound((TEXT("starwars.wav")),NULL,SND_SYNC);
    getch();
    Spotkanie0();

    return 0;
}

int main()
{

    for(;;)
    {
        cout<<endl;
        cout<<"\t"<<"\t"<<"\t"<<"\t"<<" MENU GLOWNE "<<endl;
        cout<<"\t"<<"\t"<<"\t"<<"-------------------------"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 1. Nowa Gra"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 2. Kontynuuj"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 3. Autorzy"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 4. Opcje"<<endl;
        cout<<"\t"<<"\t"<<"\t"<<" 5. Koniec"<<endl;
        cout<<endl;
        {
            wybor=getch();
        }
        switch(wybor)
        {
        case '1':
        {
            system("CLS");
            cout<<"Tak wiec zaczynajmy.."<<endl;
            getch();
            rozdzial1();
            break;
        }
        case '2':
        {
            system("CLS");
            cout<<"\t"<<"\t"<<"Niedostepne w wersji beta"<<endl;
            break;
        }
        case '3':
        {
            system("CLS");
            cout<<"\t"<<"\t"<<"Autorem jestem ja: Misiek"<<endl;
            break;
        }
        case '4':
        {
            system("CLS");
            cout<<"\t"<<"\t"<<"Niedostepne w wersji beta"<<endl;
            break;
        }
        case '5':
        {
            exit(0);
            break;
        }
        default:
            cout<<"nie ma takiej opcji w menu!";
        }
        getch();

        system("cls");
    }
    return 0;

}
