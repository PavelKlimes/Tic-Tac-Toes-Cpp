// T// TIC TAC TOE GAME

// #include ...


#include <iostream>
#include <algorithm>
using namespace std;

// Global variables
const int board_size = 9;
int board[board_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

int player_one = 1;
int player_two = 2;

bool winner = false;


// functions
int display_board() {
	cout << " -----" << endl;
	cout << "|" << board[0] << " " << board[1] << " " << board[2] << "|" << endl;
	cout << "|" << board[3] << " " << board[4] << " " << board[5] << "|" << endl;
	cout << "|" << board[6] << " " << board[7] << " " << board[8] << "|" << endl;
	cout << " -----" << endl;

	return 0;
}

// function for player one
int one_turn(void) {
	cout << player_one << " has got round." << endl;
	cout << "Choose position (1-9): ";
	int position;
	cin >> position;

	while (board[position - 1] == 2) {
		cout << "Choose else position: ";
		cin >> position;
	}
	while ((position < 0) || (position > 10)) {
		cout << "Choose else position: ";
		cin >> position;
	}
//________________________________
	if (position == 1) {
		board[0] = 1;
	}
	else if (position == 2) {
		board[1] = 1;
	}
	else if (position == 3) {
		board[2] = 1;
	}
	else if (position == 4) {
		board[3] = 1;
	}
	else if (position == 5) {
		board[4] = 1;
	}
	else if (position == 6) {
		board[5] = 1;
	}
	else if (position == 7) {
		board[6] = 1;
	}
	else if (position == 8) {
		board[7] = 1;
	}
	else if (position == 9) {
		board[8] = 1;
	}





		display_board();
	


	return 0;
}

// function for player two
int two_turn(void) {
	cout << player_two << " has got round." << endl;
	cout << "Choose position (1-9): ";
	int position;
	cin >> position;

	if (board[position - 1] == 1) {
		while (board[position - 1] == 1) {
			cout << "Choose else position: ";
			cin >> position;
		}
	}
	if ((position < 0) || (position > 10)) {
		while ((position < 0) || (position > 10)) {
			cout << "Choose else position: ";
			cin >> position;
		}
	}
//_____________________
	if (position == 1) {
		board[0] = 2;
	}
	else if (position == 2) {
		board[1] = 2;
	}
	else if (position == 3) {
		board[2] = 2;
	}
	else if (position == 4) {
		board[3] = 2;
	}
	else if (position == 5) {
		board[4] = 2;
	}
	else if (position == 6) {
		board[5] = 2;
	}
	else if (position == 7) {
		board[6] = 2;
	}
	else if (position == 8) {
		board[7] = 2;
	}
	else if (position == 9) {
		board[8] = 2;
	}


	



		display_board();
	


	return 0;
}




// function to check winner
int check_if_winner() {
// line 1
	if ((board[0] != 0) && (board[1] != 0) && (board[2] != 0)) {
		if ((board[0] == player_one) && (board[1] == player_one) && (board[2] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
		else if ((board[0] == player_two) && (board[1] == player_two) && (board[2] == player_two)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_two << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
	}

// line 2
	if ((board[3] != 0) && (board[4] != 0) && (board[5] != 0)) {
		if ((board[3] == player_one) && (board[4] == player_one) && (board[5] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << player_one << " is winner!" << endl;
			}
		}
	else if ((board[3] == player_two) && (board[4] == player_two) && (board[5] == player_two)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_two << " is winner!" << endl;
				cout << "------------" << endl;
			}
	}
	}

// line 3
	if ((board[6] != 0) && (board[7] != 0) && (board[8] != 0)) {
		if ((board[6] == player_one) && (board[7] == player_one) && (board[8] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one<< " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
	
	else if ((board[6] == player_two) && (board[7] == player_two) && (board[8] == player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}	
	}



// column 1
	if ((board[0] != 0) && (board[3] != 0) && (board[6] != 0)) {
		if ((board[0] == player_one) && (board[3] == player_one) && (board[6] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
		
	else if ((board[0] == player_two) && (board[3] == player_two) && (board[6] == player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}
	}

// column 2
	if ((board[1] != 0) && (board[4] != 0) && (board[7] != 0)) {
		if ((board[1] == player_one) && (board[4] == player_one) && (board[7] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
	
		else if ((board[1] == player_two) && (board[4] == player_two) && (board[7] == player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}
	}

// column 3
	if ((board[2] != 0) && (board[5] != 0) && (board[8] != 0)) {
		if ((board[2] == player_one) && (board[5] == player_one) && (board[8] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
		else if ((board[2] == player_two) && (board[5] == player_two) && (board[8] == player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}
	}



// diagonal 1
	if ((board[0] != 0) && (board[4] != 0) && (board[8] != 0)) {
		if ((board[0] == player_one) && (board[4] == player_one) && (board[8] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
		else if ((board[0] == player_two) && (board[4] == player_two) && (board[8] player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}
	}

// diagonal 2
	if ((board[2] != 0) && (board[4] != 0) && (board[6] != 0)) {
		if ((board[2] == player_one) && (board[4] == player_one) && (board[6] == player_one)) {
			winner = true;
			for (int i = 0; i < 3; i++) {
				cout << "------------" << endl;
				cout << player_one << " is winner!" << endl;
				cout << "------------" << endl;
			}
		}
		else if ((board[2] == player_two) && (board[4] == player_two) && (board[6] == player_two)) {
		winner = true;
		for (int i = 0; i < 3; i++) {
			cout << "------------" << endl;
			cout << player_two << " is winner!" << endl;
			cout << "------------" << endl;
		}
	}
	}



return 0;}









int main() {

	// fill board
	fill(board, board + board_size, 0);


	display_board();



	do {
		one_turn();
		check_if_winner();
		if(winner == true)
			break;
		two_turn();
		check_if_winner();
		if(winner == true)
			break;
	} while (winner == false);
	


	cin.get();
	return 0;
}