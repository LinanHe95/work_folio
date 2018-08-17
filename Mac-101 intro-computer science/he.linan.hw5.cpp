#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

int rand_0toN1(int n);
void draw_a_object();
int select_next_available(int n);
bool object_drawn[8];
int object_remaining = 8;
char *color[4] = { "red", "blue", "orange", "green" };
char *shape[2] = { "ball", "cube"};

int main() {
	int n, i;
	srand(time(NULL));   // Set seed for randomizing.
	while (1) {
		cout << "Enter no. from 1 to 8 to draw (0 to exit): ";
		cin >> n;
		if (n == 0)
			break;
		for (i = 1; i <= n; i++)
			draw_a_object();
		
	}
	return 0;
}
// Draw-a-object function
// Perform a card draw by getting a random 0-1 and a random 0-3.
// Use these to index the strings arrays, color and shape.

void draw_a_object() {
	int r;      // Random index (0 thru 3) into
				//  color array
	int s;      // Random index (0 thru 1) into
				//  shape array
	int n, card;
	n = rand_0toN1(object_remaining--);
	card = select_next_available(n);
	r = card % 2;            // r = random 0 to 3
	s = card / 2;            // s = random 0 to 1
	cout << shape[r] << " of " << color[s] << endl;
	
}

// Select-next-available-card function.
// Find the Nth element of card_drawn, skipping over
//  those elements already set to true.

int select_next_available(int n) {
	int i = 0;
	// At beginning of object skip object already drawn.
	while (object_drawn[i])
		i++;
	while (n-- > 0) {     // Do the following n times:
		i++;                  // Advance to next card
		while (object_drawn[i]) // Skip past objects
			i++;
	}

	object_drawn[i] = true;
	return i;
}

int rand_0toN1(int n) {
	return rand() % (n+1);
}

