#include <stdio.h>

#define TOTAL_CHESS_PIECES_TYPE	6
#define CHESS_KING_INDEX		0
#define CHESS_QUEEN_INDEX		1
#define CHESS_BISHOP_INDEX		2
#define CHESS_KNIGHT_INDEX		3
#define CHESS_LOOK_INDEX		4
#define CHESS_PAWN_INDEX		5

#define CHESS_KING_COUNT		1
#define CHESS_QUEEN_COUNT		1
#define CHESS_BISHOP_COUNT		2
#define CHESS_KNIGHT_COUNT		2
#define CHESS_LOOK_COUNT		2
#define CHESS_PAWN_COUNT		8



int main(void)
{
	int chess_pieces[TOTAL_CHESS_PIECES_TYPE];

	scanf("%d %d %d %d %d %d", &chess_pieces[CHESS_KING_INDEX], &chess_pieces[CHESS_QUEEN_INDEX], &chess_pieces[CHESS_BISHOP_INDEX], &chess_pieces[CHESS_KNIGHT_INDEX], &chess_pieces[CHESS_LOOK_INDEX], &chess_pieces[CHESS_PAWN_INDEX]);
	printf("%d %d %d %d %d %d", CHESS_KING_COUNT - chess_pieces[CHESS_KING_INDEX], CHESS_QUEEN_COUNT - chess_pieces[CHESS_QUEEN_INDEX], CHESS_BISHOP_COUNT - chess_pieces[CHESS_BISHOP_INDEX], CHESS_KNIGHT_COUNT - chess_pieces[CHESS_KNIGHT_INDEX], CHESS_LOOK_COUNT - chess_pieces[CHESS_LOOK_INDEX], CHESS_PAWN_COUNT - chess_pieces[CHESS_PAWN_INDEX]);
	return 0;
}