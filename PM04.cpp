#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

// Soooo het lukt niet echt, dit heb ik tot nu. Ik heb wel een idee hoe die functie moet werken but evvhvhggfc tfv.

class Grootgetal
{
public:
    int info;
    Grootgetal* volgende, *vorige;
    Grootgetal *A = NULL, *B = NULL, *C = NULL, *Aa = NULL, *Bb = NULL, *Cc = NULL;
};

void afdrukken ( Grootgetal* uitgang ) // Basically om van achter naar voren, spoiler alert het werkt niet
{
    Grootgetal* p = uitgang;
    while ( p != NULL )
    {
        cout << p->info << " ";
        p = p->volgende;
    }

}

void getall( Grootgetal* & ingang, Grootgetal* & uitgang )// pointer gedoe, werk prima voor zover ik weet
{
    int i, j, n, getal;
    char opt;
    Grootgetal* p;
    cin.get(opt);
    while( opt == '\n' )
        cin.get(opt);
    while( opt != '\n' )
    {
        getal = 0;
        n = 0;
        for ( j = 0; j < 4; j++ )
        {
            if ( opt == '0' )
            {
                getal = 10 * getal + 0;
                n++;
            }
            else if ( opt == '1' )
            {
                getal = 10 * getal + 1;
                n++;
            }
            else if ( opt == '2' )
            {
                getal = 10 * getal + 2;
                n++;
            }
            else if ( opt == '3' )
            {
                getal = 10 * getal + 3;
                n++;
            }
            else if ( opt == '4' )
            {
                getal = 10 * getal + 4;
                n++;
            }
            else if ( opt == '5' )
            {
                getal = 10 * getal + 5;
                n++;
            }
            else if ( opt == '6' )
            {
                getal = 10 * getal + 6;
                n++;
            }
            else if ( opt == '7' )
            {
                getal = 10 * getal + 7;
                n++;
            }
            else if ( opt == '8' )
            {
                getal = 10 * getal + 8;
                n++;
            }
            else if ( opt == '9' )
            {
                getal = 10 * getal + 9;
                n++;
            }
            if( j == 3 && (opt == '\n','0','1','2','3','4','5','6','7','8','9') )
            {
                p = new Grootgetal;// tbh ik heb geen idee of dit pointer gedoe
                p->info = getal;   // klopt... it works thooo
                p->volgende = ingang;
                p->vorige = uitgang;
                ingang = p;
                cout << p->info << " ";
            }
            if( opt != '\n' ) cin.get(opt);
        }
    }
    cout << "n = " << n << endl << endl;
}

void kies() //menuuuuuutje
{
    Grootgetal *A = NULL, *B = NULL, *C = NULL, *Aa = NULL, *Bb = NULL, *Cc = NULL;
    char opt = 'x';
    while( opt  != 'M' && opt != 'm' )
    {
        cout << "(A)\t(B)\t(C)\t(M)enu" << endl;
        cin.get(opt);
        while( opt == '\n' )
            cin.get(opt);
        switch(opt)
        {
        case 'A':
            getall( A, Aa );
            break;
        case 'B':
            getall( B, Bb );
            break;
        case 'C':
            getall( C, Cc );
            break;
        default:
            break;
        }
    }
}

void kies2() // nog een menuuutje
{
    Grootgetal *Aa, *Bb, *Cc;
    char opt = 'x';
    while( opt  != 'M' && opt != 'm' )
    {
        cout << "(A)\t(B)\t(C)\t(M)enu" << endl;
        cin.get(opt);
        while( opt == '\n' )
            cin.get(opt);
        switch(opt)
        {
        case 'A':
            afdrukken( Aa );
            break;
        case 'B':
            afdrukken( Bb );
            break;
        case 'C':
            afdrukken( Cc );
            break;
        default:
            break;
        }
    }
}

void menu() // De Menu
{
    char opt = 'x';
    while( opt  != 'S' && opt != 's' )
    {
        cout << "(K)ies\t(T)elop\t(A)fdrukken\t(S)" << endl;
        cin.get(opt);
        while( opt == '\n' )
            cin.get(opt);
        switch(opt)
        {
        case 'K':
            kies();
            break;
        case 'T':
            cout << "telop()" << endl;
            break;
        case 'A':
            kies2();
            break;
        default:
            break;
        }
    }
}

int main() // main
{
    Grootgetal *A = NULL, *B = NULL, *C = NULL, *Aa = NULL, *Bb = NULL, *Cc = NULL, *p, *pp, *q, *qq, *r, *k, *kk, *l, *ll;
    char optA, optB;
    int a, b, aanta = 0, aantb = 0, j, optel, getal;

    cout << "A:" << endl;
    cin.get( optA );
    while( optA == '\n' )
        cin.get(optA);
    while( optA != '\n' )
    {
        getal = 0;
        a = 0;
        for ( j = 0; j < 4; j++ )
        {
            if ( optA == '0' )
            {
                getal = 10 * getal + 0;
                a++;
            }
            else if ( optA == '1' )
            {
                getal = 10 * getal + 1;
                a++;
            }
            else if ( optA == '2' )
            {
                getal = 10 * getal + 2;
                a++;
            }
            else if ( optA == '3' )
            {
                getal = 10 * getal + 3;
                a++;
            }
            else if ( optA == '4' )
            {
                getal = 10 * getal + 4;
                a++;
            }
            else if ( optA == '5' )
            {
                getal = 10 * getal + 5;
                a++;
            }
            else if ( optA == '6' )
            {
                getal = 10 * getal + 6;
                a++;
            }
            else if ( optA == '7' )
            {
                getal = 10 * getal + 7;
                a++;
            }
            else if ( optA == '8' )
            {
                getal = 10 * getal + 8;
                a++;
            }
            else if ( optA == '9' )
            {
                getal = 10 * getal + 9;
                a++;
            }
            if( j == 3 && (optA == '\n','0','1','2','3','4','5','6','7','8','9') )
            {
                p = new Grootgetal;// tbh ik heb geen idee of dit pointer gedoe
                p->info = getal;   // klopt... it works thooo
                p->volgende = A;
                A = p;
                cout << p->info << " ";
                aanta++;
            }
            if( optA != '\n' ) cin.get(optA);
        }
    }
    cout << "\ta = " << a << "\taanta= " << aanta << endl;

    cout << "A2: " << endl;
    int aa = 1, aaa = 10000;
    p = A;
    for ( j = 1; j < (4 - a); j++ )
        aa *=10;
        aaa /= 10;
    while( p != NULL )
    {
        pp = p->volgende;
        p->info = p->info + ((pp->info%aa)*aaa);
        /*if( pp->volgende != NULL )*/ pp->info = pp->info/aa;
        /*else*/ pp->info = pp->info;
        cout << p->info << " ";
        p = pp;
    }

    cout << endl << "B:" << endl;
    cin.get( optB );
    while( optB == '\n' )
        cin.get(optB);
    while( optB != '\n' )
    {
        getal = 0;
        b = 0;
        for ( j = 0; j < 4; j++ )
        {
            if ( optB == '0' )
            {
                getal = 10 * getal + 0;
                b++;
            }
            else if ( optB == '1' )
            {
                getal = 10 * getal + 1;
                b++;
            }
            else if ( optB == '2' )
            {
                getal = 10 * getal + 2;
                b++;
            }
            else if ( optB == '3' )
            {
                getal = 10 * getal + 3;
                b++;
            }
            else if ( optB == '4' )
            {
                getal = 10 * getal + 4;
                b++;
            }
            else if ( optB == '5' )
            {
                getal = 10 * getal + 5;
                b++;
            }
            else if ( optB == '6' )
            {
                getal = 10 * getal + 6;
                b++;
            }
            else if ( optB == '7' )
            {
                getal = 10 * getal + 7;
                b++;
            }
            else if ( optB == '8' )
            {
                getal = 10 * getal + 8;
                b++;
            }
            else if ( optB == '9' )
            {
                getal = 10 * getal + 9;
                b++;
            }
            if( j == 3 && (optB == '\n','0','1','2','3','4','5','6','7','8','9') )
            {
                q = new Grootgetal;// tbh ik heb geen idee of dit pointer gedoe
                q->info = getal;   // klopt... it works thooo
                q->volgende = B;
                B = q;
                cout << q->info << " ";
                aantb++;
            }
            if( optB != '\n' ) cin.get(optB);
        }
    }
    cout << "\tb = " << b << "\taantb= " << aantb << endl;

        cout << "B2: " << endl;
    int bb = 1, bbb = 10000;
    q = B;
    for ( j = 1; j < (4 - a); j++ )
        bb *=10;
        bbb /= 10;
    while( q != NULL )
    {
        qq = q->volgende;
        q->info = q->info + ((qq->info%bb)*bbb);
        /*if( pp->volgende != NULL )*/ qq->info = qq->info/bb;
        /*else*/ qq->info = qq->info;
        cout << q->info << " ";
        q = qq;
    }

    /*cout << endl << "C:" << endl;
    int aa = 1;
    int bb = 1;
    int xx, yy;
    for ( j = 1; j < (4 - a); j++ )
        aa *=10;
    for ( j = 1; j < (4 - b); j++ )
        bb *=10;
    int rest = 0;
    if( aanta < aantb )
    {
        k = p;
        l = q;
        xx = aa;
        yy = bb;
    }
    else
    {
        k = q;
        l = p;
        yy = aa;
        xx = bb;
    }
    while( l != NULL )
    {
        cout << "bla1" << endl;
        while( k != NULL )
        {
            cout << "bla2" << endl;
            kk = k->volgende;
            k->info = k->info + ((kk->info%xx)*xx);
            if( kk->info != NULL ) kk->info = kk->info/xx;
            else kk->info = kk->info;

            ll = l->volgende;
            l->info = l->info + ((l->info%yy)*yy);
            if( ll->info != NULL ) ll->info = ll->info/yy;
            else ll->info = ll->info;

            r = new Grootgetal;
            r->info = (k->info + l->info)%10000 + rest;
            rest = (k->info + l->info)/10000;
            r->volgende = C;
            C = r;
            cout << r->info << " ";
            k = kk;
            l = ll;
            r = r->volgende;
        }

    cout << "bla3" << endl;
    ll = l->volgende;
    l->info = l->info + ((l->info%yy)*yy);
    if( ll->info != NULL ) ll->info = ll->info/yy;
    else ll->info = ll->info;

    r = new Grootgetal;
    r->info = (l->info)%10000 + rest;
    rest = (l->info)/10000;
    r->volgende = C;
    C = r;
    cout << r->info << " ";
    l = ll;
    r = r->volgende;
    }*/
}

// So yea je hebt waarschijnlijk hier niks aan, but yea, if you got any tips and tricks thats always welcome hehehe.


// PM04.cpp : Defines the entry point for the console application.
//

/*#include "stdafx.h"
#include <iostream>
using namespace std;

void mainMenu();

int main()
{
    mainMenu();
    int opt;
    cin >> opt;
    while(opt != 9)
    {
        switch (opt)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            cout << "Rather use a valid option" << endl;
            break;
        }
        mainMenu();
        cin >> opt;
    }
    return 0;
}

int print()
{

}

int multiply()
{

}

int count()
{

}

int fibonacci()
{

}

int read()
{

}

int add()
{

}

int make_one()
{

}

int destroy()
{

}

* MainMenu
* @Definition: The xuser interface
* @improvements:  create User interface (GUI)
*
void mainMenu()
{
    cout << "__________________________________" << endl << "\t      PM04" << endl << "    What action do you demand?" << endl << "__________________________________"
         << endl << "\n 1) print \t 5) vermenigvuldig \n 2) telop \t 6) fibonacci \n 3) leesin  \t 7) voegachter \n 4) maakeen \t 8) vernietig \n \n 9) Stoppen" << endl << "__________________________________" << endl << "Number: " << endl;
}*/

