/**
 * @author Alessandro Viespoli - 2009659 (alessandro.viespoli@studentiunipd.it)
 */

#ifndef CHESSMAN_H
#define CHESSMAN_H

class chessman
{
    protected:
    char piece;

    public:
    chessman(char p);
    virtual ~chessman();

    //check if the move can be done by a specific chessman
    virtual bool isLegalMove(unsigned short _startCol, unsigned short _startRow, unsigned short _destiCol, unsigned short _destiRow) = 0;

    //idea : fare un metodo che sapendo la mia posizione, restituisce una lista con tutte le cordinate raggiungibili da quel pezzo in x,y cordinate

    char getChar() const;

    chessman(const chessman &other) = delete;
    chessman &operator=(const chessman &other) = delete;
};

#endif