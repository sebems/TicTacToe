# ------------------------------------------------------------------------
# tic-tac-toe game, using the command line terminal
#
# (C) 2021 Sean Ebenmelu (inspr Automate the Boring Stuff), Abuja, Nigeria
# email: ebenmelusean01@yahoo.com
# ------------------------------------------------------------------------

from check_win_TTT import check_win, move_short

theBoard = {
    'top_L': '', 'top_M': '', 'top_R': '',
    'mid_L': '', 'mid_M': '', 'mid_R': '',
    'bot_L': '', 'bot_M': '', 'bot_R': ''
}


def print_board(board):
    """  Prints the Game Board in a user-friendly way  """
    print(board['top_L'] + "  |  " + board['top_M'] + "  |  " + board['top_R'])
    print('--+----+--')
    print(board['mid_L'] + "  |  " + board['mid_M'] + "  |  " + board['mid_R'])
    print('--+----+--')
    print(board['bot_L'] + "  |  " + board['bot_M'] + "  |  " + board['bot_R'])

print_board(theBoard)


def play_Game():
    """ Tic Tac Toe Game Mechanism """
    turn = 'X'

    for _ in range(9):

        # gets input move from player

        p1_move = input()
        p1_move = move_short(p1_move)
        theBoard[p1_move] = turn

        print_board(theBoard)

        if check_win(theBoard, turn)[0]:   # checks if any of the players win
            winner = check_win(theBoard, turn)[1]
            print('\nPlayer {} wins\n'.format(winner))
            break

        if _ == 8 and check_win(theBoard, turn)[0] == False:   # checks for draw case
            print('Draw')
            break

        if turn == 'X':     # switches players
            turn = 'O'
        else:
            turn = 'X'
        print()

if __name__ == '__main__':
    play_Game()