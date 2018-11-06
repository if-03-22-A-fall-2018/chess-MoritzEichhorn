/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */

 struct ChessPiece{
   enum PieceType type;
   enum PieceColor color;
 };

 struct ChessSquare{
   bool is_occupied;
   struct ChessPiece piece;
 };

 enum PieceType {
   Pawn, Rook, Knight, Bishop, Queen, King, NoPiece
 };
 enum PieceColor { White, Black };
 enum MoveType { NormalMove, CaptureMove };

 typedef struct ChessSquare ChessBoard[8][8];
