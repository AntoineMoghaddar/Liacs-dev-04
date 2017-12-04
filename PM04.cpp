#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

// Soooo het lukt niet echt, dit heb ik tot nu, een aparte code thingy. Ik heb wel een idee hoe die functie moet werken but evvhvhggfc tfv.

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
        cout << p->info << " ";
}

void getal( Grootgetal* & ingang, Grootgetal* & uitgang )// pointer gedoe, werk prima voor zover ik weet
{
    int i, j, n, getal;
    char opt;
    Grootgetal* p, *q;
    cin.get(opt);
    while( opt == '\n' )
        cin.get(opt);
    while( opt != '\n' )
    {
        getal = 0;
        n = 0;
        for ( j = 0; j < 4; j++ )
        {
            if ( opt == '0' ) { getal = 10 * getal + 0; n++; }
            else if ( opt == '1' ) { getal = 10 * getal + 1; n++; }// n is nodig voor de optelling, n is
            else if ( opt == '2' ) { getal = 10 * getal + 2; n++; }// het aantal laatste digits die het
            else if ( opt == '3' ) { getal = 10 * getal + 3; n++; }// vakje van de volgende vakje moet
            else if ( opt == '4' ) { getal = 10 * getal + 4; n++; }// 'stelen' zodat er telkens een k tal
            else if ( opt == '5' ) { getal = 10 * getal + 5; n++; }// met een k tal wordt opgeteld, if
            else if ( opt == '6' ) { getal = 10 * getal + 6; n++; }// that makes sense :p
            else if ( opt == '7' ) { getal = 10 * getal + 7; n++; }
            else if ( opt == '8' ) { getal = 10 * getal + 8; n++; }
            else if ( opt == '9' ) { getal = 10 * getal + 9; n++; }
            if( j == 3 && (opt == '\n','0','1','2','3','4','5','6','7','8','9') )
            {
                q = new Grootgetal;// tbh ik heb geen idee of dit pointer gedoe
                q->info = getal;   // klopt... it works thooo
                q->volgende = ingang;
                q->vorige = uitgang;
                ingang = q;
                uitgang = p;
                cout << q->info << " ";
                p = q;
            }
            if( opt != '\n' ) cin.get(opt);
        }
    }
    cout << "n = " << n << endl << endl;;
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
            getal( A, Aa );
            break;
        case 'B':
            getal( B, Bb );
            break;
        case 'C':
            getal( C, Cc );
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
    menu();
}

// So yea je hebt waarschijnlijk hier niks aan, but yea, if you got any tips and tricks thats always welcome hehehe.
