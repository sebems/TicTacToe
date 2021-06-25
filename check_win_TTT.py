# ------------------------------------------------------------------------
# tic-tac-toe game accesory module, using the command line terminal
#
# (C) 2021 Sean Ebenmelu (inspr Automate the Boring Stuff), Abuja, Nigeria
# email: ebenmelusean01@yahoo.com
# ------------------------------------------------------------------------

# Game Board

theBoard = {
    'top_L': '', 'top_M': '', 'top_R': '',
    'mid_L': '', 'mid_M': '', 'mid_R': '',
    'bot_L': '', 'bot_M': '', 'bot_R': ''
}

def check_win(board, turn):
    """ 
    Checks if either of the players have won the game 

    Parameter:

        board: a dictionary, the game board
        turn: a string, the current player

    Return:

        True if a player has won
        False if there is no winner yet
    """

    top_row = [board['top_L'], board['top_M'], board['top_R']]
    mid_row = [board['mid_L'], board['mid_M'], board['mid_R']]
    bot_row = [board['bot_L'], board['bot_M'], board['bot_R']]

    first_col = [board['top_L'], board['mid_L'], board['bot_L']]
    mid_col = [board['top_M'], board['mid_M'], board['bot_M']]
    last_col = [board['top_R'], board['mid_R'], board['bot_R']]

    diag1 = [board['top_L'], board['mid_M'], board['bot_R']]
    diag2 = [board['top_R'], board['mid_M'], board['bot_L']]

    # CHECK X WIN

    if turn == 'X':

        #     X-straight win case

        if top_row == ['X','X','X']:    # win on top row?
            return True,'X' 

        elif mid_row == ['X','X','X']:  # win on middle row?
            return True,'X' 

        elif bot_row == ['X','X','X']:  # win on bottom row?
            return True,'X' 

        elif first_col == ['X','X','X']:  # win on first column?
            return True,'X'    

        elif mid_col == ['X','X','X']:  # win on middle column?
            return True,'X' 

        elif last_col == ['X','X','X']:  # win on last column?
            return True,'X' 

        #      X-diagonal win case

        elif diag1 == ['X','X','X'] or diag2 == ['X','X','X']:    # win on any diagonal?
            return True,'X' 

    if turn == 'O':     # same logic cases as player X

        #     O-straight win case

        if top_row == ['O','O','O']:
            return True,'O' 

        elif mid_row == ['O','O','O']:
            return True,'O' 

        elif bot_row == ['O','O','O']:
            return True,'O' 

        elif first_col == ['O','O','O']:
            return True,'O'    

        elif mid_col == ['O','O','O']:
            return True,'O' 

        elif last_col == ['O','O','O']:
            return True,'O' 

        #      O-diagonal win case

        elif diag1 == ['O','O','O'] or diag2 == ['O','O','O']:
            return True,'O' 
        
    return False,''

def move_short(move):
    """ Shortens the user move input (i.e. 'TL' instead of 'top_L') """

    # TOP ROW

    if move == 'TL' or move == 'tl':
        return 'top_L'
    elif move == 'TM' or move == 'tm':
        return 'top_M'
    elif move == 'TR' or move == 'tr':
        return 'top_R'

    # MIDDLE ROW

    elif move == 'ML' or move == 'ml':
        return 'mid_L'
    elif move == 'MM' or move == 'mm':
        return 'mid_M'
    elif move == 'MR' or move == 'mr':
        return 'mid_R'

    # BOTTOM ROW

    elif move == 'BL' or move == 'bl':
        return 'bot_L'
    elif move == 'BM' or move == 'bm':
        return 'bot_M'
    elif move == 'BR' or move == 'br':
        return 'bot_R'

if __name__ == '__main__':
    pass